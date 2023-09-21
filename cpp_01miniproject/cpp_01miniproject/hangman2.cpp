#include<iostream>
#include<vector>
#include<ctime>
#include<fstream>
#include<string>
using namespace std;
using std::string;

// ��� �׸��� �����ϴ� ����

vector<string> hangmanArt = {
	"  +---+\n  |   |\n      |\n      |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n��    |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n�� �� |\n========="
};

int main() {
	ifstream file_r("fruit.txt");
	string str;
	vector<string> comp;
	comp.clear();

	int timer = 0; //Ÿ�̸�

	while (file_r >> str) { //���� �޾ƿ��� �ܾ� comp ���Ϳ� �������
		comp.insert(comp.begin(), str);
	};

	file_r.close();

	srand(time(NULL));// srand�� �տ� �;��Ѵ�.

	int ran = rand();
	int random = ran % comp.size(); //comp ���Ϳ� �� ���� �ܾ� �� ��ŭ �����ϰ� �����ֱ�

	string correct = comp[random]; //���� �ܾ� �����ϱ�

	int word_size = correct.size();
	cout << "�ܾ��� ���� ���� " << word_size << "�Դϴ�." << endl << endl;
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
	clock_t startTime = clock(); //���� �ð�
	int timeover =0;

	while (1) {
		if (count >= 8) {
			cout << "-----------------------G A M E O V E R--------------------------"<<endl;
			cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
				break;
		}
		cout << "--------------------------------------------------------------\n" << "| 1. ���ĺ� ã�� " << endl << "| 2. �ܾ� ���߱�" << endl << "| 3. �ܾ� Ȯ�� �� ���� ! " << endl << "| ���Ͻô� ��ȣ�� �����ϼ��� . : ";
		// �׸� ���� ����
		cin >> table_num;
		cout << endl;
		switch (table_num) {
		case(1): {
			cout << "���ĺ��� �Է��ϼ��� . : ";
			cin >> alpha;
			cout << endl;
			have = correct.find(alpha);
			clock_t endTime = clock(); //���� �ð�
			int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��
			int left_time = 100 - timer;
			if (have == string::npos) {
				cout << "�ش� ���ĺ��� �����ϴ�. " << endl;
				cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
				if (left_time < 0) {
					cout << "T - I - M - E        O - V - E - R"<<endl;
					timeover++;
					break;
				}
				count++;
				cout << "���� ����:\n" << hangmanArt[count] << endl;
				if (count >= 8)
					continue;
				cout << show<<endl;
			}
			else {
				cout << alpha << "�� �����մϴ�. " << endl;
				cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
				cout << "���� ����:\n" << hangmanArt[count] << endl;

				while (have != string::npos) {
					spot.insert(spot.begin(), have);
					have = correct.find(alpha, have + 1);
				}
				for (auto i : spot) {
					show.replace(i, 1, alpha);//�ε��� ��ȣ�� �ٷ� ���;� �Ѵ�.}
				}
				cout << show << endl;
				if (show == correct) {
					cout << "## �����մϴ� ! �����Դϴ� ##" << endl;
					break;
				}
				spot.clear();
			}
			continue;
		}
		case(2): {
			cout << "���� �Է����ּ��� : ";
			cin >> user;
			cout << endl;
			clock_t endTime = clock(); //���� �ð�
			int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��
			int left_time = 100 - timer;
			if (left_time < 0) {
				cout << "T - I - M - E        O - V - E - R"<<endl;
				timeover++;
				break;
			}
			cout << "���� �ð� : " <<left_time << endl << endl; //���� �ð� ���

			if (user == correct) {
				cout << "## �����մϴ� ! �����Դϴ� ##" << endl;
				break;
			}
			else {
				cout << "������ �ƴմϴ�." << endl;
				count++;
				cout << "���� ����:\n" << hangmanArt[count] << endl;
				if (count >= 8)
					continue;
				cout << show << endl;
				continue;
			}
		}
		case(3): {
			cout << "�ƽ����� ! ������ ������ !" << endl;
			break;
		}}
		if (timeover<0)
			cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
		break;
	}
	return 0;
}