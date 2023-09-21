#include<iostream>
#include<vector>
#include<ctime>
#include<fstream>
#include<string>

using namespace std;
using std::string;

int main() {

	ifstream file_r("fruit.txt");
	string str;
	vector<string> comp;
	vector<string> hangman = { "head","eyes","mouth","neck","arms","upper body","legs","feet" };
	comp.clear();
	while (file_r >> str) { //���� �޾ƿ��� �ܾ� comp ���Ϳ� �������
		comp.insert(comp.begin(), str);
	};
	file_r.close();

	srand(time(NULL));// srand�� �տ� �;��Ѵ�.
	int ran = rand();
	int random = ran % comp.size(); //comp ���Ϳ� �� ���� �ܾ� �� ��ŭ �����ϰ� �����ֱ�
	string correct = comp[random]; //���� �ܾ� �����ϱ�

	int word_size = correct.size();
	cout << "�ܾ��� ���� ���� " << word_size << "�Դϴ�." << endl <<endl;
	vector<string> user_word(word_size); // �ܾ� ���ڼ��� �����ֱ�
	user_word.clear();

	string user; //����� �Է� �ܾ�
	string alpha; //����ڰ� �Է��ϴ� ���ĺ�
	int count = 0; // ��� ������� count
	int table_num = 1;// ����� ���� ����
	string show;
	show.clear();
	for (int i = 0; i < word_size; i++) {
		show.push_back('=');
	}

	cout << "���� �ܾ� : ���� " << endl;
	//cout << show<<endl;
	//for (int i = 0; i < word_size; i++) {
	//	cout << " " << "_" << " "; //���ĺ��� ����ٸ� _�ڸ��� ���ĺ��� ����.
	//};


	int have = 0;
	vector<int> spot; //���ĺ��� �ߺ����� �ִ� ��ġ�� �����ϱ� ���� ����
	spot.clear();
	while (1) {
		cout << "--------------------------------------------------------------\n"<< "| 1. ���ĺ� ã�� " << endl << "| 2. �ܾ� ���߱�" << endl << "| 3. �ܾ� Ȯ�� �� ���� ! " << endl << "| ���Ͻô� ��ȣ�� �����ϼ��� . : ";
		// �׸� ���� ����
		cin >> table_num;
		cout << endl;
		if (table_num < 1 && table_num>3)
			break;
		switch (table_num) {
		case(1):
			cout << "���ĺ��� �Է��ϼ��� . : ";
			cin >> alpha;
			cout << endl;
			have = correct.find(alpha);
			if (have == string::npos) 
				cout << "�ش� ���ĺ��� �����ϴ�. " << endl;
			else {
				cout << alpha << "�� �����մϴ�. " << endl;
				while (have != string::npos){
					spot.insert(spot.begin(), have);
					have = correct.find(alpha, have + 1);
				}
				for (auto i : spot) {
					show.replace(i, 1, alpha);//�ε��� ��ȣ�� �ٷ� ���;� �Ѵ�.
				}			
				cout << show << endl;
				spot.clear();
			}
			continue;
		case(2):
			cout << "���� �Է����ּ��� : ";
			cin >> user;
			cout << endl;

			if (user == correct)
			{
				cout << "## �����մϴ� ! �����Դϴ� ##" << endl;
				break;
			}
			else
			{
				cout << "������ �ƴմϴ�." << endl;
				continue;
			}
		case(3):
			cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�."<<endl;
			break;
		}
		break;
	}
	

}