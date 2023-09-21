#include<iostream>
#include <stdio.h>
#include <conio.h>
#include<vector>
#include <string>
#include<ctime>
#include<fstream>
#include<Windows.h>
#include<iomanip>
using namespace std;

void gotoxy(int x, int y)
{
	COORD Pos;        //x, y�� ������ �ִ� ����ü
	Pos.X = x;  //x�� �����̴� ����
	Pos.Y = 24 + 2 * y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void show(vector<string> k) {
	cout << setw(60) << "|  MENU  |" << endl << endl;
	for (auto i : k) {
		cout << setw(60) << i << endl << endl;
	}
}
// �����¿� ����� ����
#define UP 72
#define DOWN 80
#define ENTER 13
int main() {
	vector<string> menu = { "1.  MANUAL","2.   START","3. RANKING" };
	cout << endl << endl << endl << endl;
	cout << setw(110) << "___________________________________________________________________________________________" << endl;
	cout << setw(110) << "#      #        #         #     #       #######      #           #        #         #     #" << endl;
	cout << setw(110) << "#      #       # #        ##    #      #             ##         ##       # #        ##    #" << endl;
	cout << setw(110) << "#      #      #   #       # #   #     #              # #       # #      #   #       # #   #" << endl;
	cout << setw(110) << "########     #######      #  #  #     #    ######    #  #     #  #     #######      #  #  #" << endl;
	cout << setw(110) << "#      #    #       #     #   # #      #        #    #   #   #   #    #       #     #   # #" << endl;
	cout << setw(110) << "#      #   #         #    #    ##       #      #     #    # #    #   #         #    #    ##" << endl;
	cout << setw(110) << "#      #  #           #   #     #        #####       #     #     #  #           #   #     #" << endl;
	cout << setw(110) << "___________________________________________________________________________________________" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	show(menu);
	int menu_num = 0;
	int count = 0;
	string arrow = " /\\  \n/__\\ \n ||  \n ||  \n";
	int c;
	i
	for (;;) {
		gotoxy(20, count);
		if (1) {        //Ű���� �Է� Ȯ�� (true / false)
			c = _getch();      // ����Ű �Է½� 224 00�� ������ �Ǳ⿡ �տ� �ִ� �� 224�� ����
			c2 = c;
			if (c == 224)
				c = _getch();  // ���� �Է°��� �Ǻ��Ͽ� �����¿� ���
			if (count >= 0 && count <= 2) {
				switch (c) {
				case 72:
					if (count > 0)
						count--;
					continue;
				case 80:
					if (count < 2)
						count++;
					continue;
				case ENTER:
					menu_num = count;
					break;
				}
			}
		}
		break;
	}

	if (menu_num == 0)
	{cout << endl << endl << endl << endl << setw(100) << "WELCOME TO HERE ! \n\n\n\n\n" << "1. ����ڴ� 100���� �ð��� ����ϴ�. " << endl << "2. ����� ����� 9�� Ʋ�� ��� �Ҹ�˴ϴ�. " << endl << "3. �ܾ ���� ����ڸ��� ��ŷ�� �̸��� ���� �� �ֽ��ϴ�." << endl << "4. 30�� �̻��� ���ӵ� ���� Ȱ���� �������ֽʽÿ�. ";
	cout << endl<<endl<< "�����Ͻðڽ��ϱ�?"
	// ��� �׸��� �����ϴ� ����
	vector<string> hangmanArt = {
		"  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
		"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n��    |\n=========",
		"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n�� �� |\n========="
	};
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
	if (menu_num == 3) {
		system("cls");
		ifstream file("score.txt");
		string line;
		while (getline(file, line)) {
			cout << line;
			cout << "\n";
		}
	}
	if (menu_num == 1) {
		system("cls");
		cout << "�ܾ��� ���� ���� " << word_size << "�Դϴ�." << endl << endl;
		vector<string> user_word(word_size); // �ܾ� ���ڼ��� �����ֱ�
		user_word.clear();
		string user; //����� �Է� �ܾ�
		string alpha; //����ڰ� �Է��ϴ� ���ĺ�
		vector<string> pastalpha;//���ݱ��� �Է��� ���ĺ�
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
		int timeover = 0;
		while (1) {
			if (count >= 8) {
				cout << "-----------------------G A M E O V E R--------------------------";
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
				if (alpha == "1" || alpha == "2" || alpha == "3") {
					cout << "���ĺ��� �Է��ϼ��� . : ";
					cin >> alpha;
					cout << endl;
				}
				have = correct.find(alpha);
				clock_t endTime = clock(); //���� �ð�
				int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��
				int left_time = 100 - timer;
				pastalpha.push_back(alpha);

				if (have == string::npos) {
					cout << "�ش� ���ĺ��� �����ϴ�. " << endl;
					cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
					if (left_time < 0) {
						cout << "T - I - M - E        O - V - E - R";
						timeover++;
						break;
					}
					count++;
					cout << "���� ����:\n" << hangmanArt[count] << endl;
					cout << "���ݱ��� �Է� ���ĺ� : ";
					for (int i = 0; i < pastalpha.size(); i++) {
						cout << pastalpha.at(i) + ' ';
					}
					cout << "\n";
					cout << show << endl;
				}
				else {
					cout << alpha << "�� �����մϴ�. " << endl;
					cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
					cout << "���� ����:\n" << hangmanArt[count] << endl;
					cout << "���ݱ��� �Է� ���ĺ� : ";
					for (int i = 0; i < pastalpha.size(); i++) {
						cout << pastalpha.at(i) + ' ';
					}
					cout << "\n";
					while (have != string::npos) {
						spot.insert(spot.begin(), have);
						have = correct.find(alpha, have + 1);
					}
					for (auto i : spot) {
						show.replace(i, 1, alpha);//�ε��� ��ȣ�� �ٷ� ���;� �Ѵ�.}
					}
					cout << show << endl;
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
					cout << "T - I - M - E        O - V - E - R";
					timeover++;
					break;
				}
				cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
				if (user == correct) {
					string username;
					cout << "## �����մϴ� ! �����Դϴ� ##" << endl;
					cout << "############�̸��� �Է��ϼ���############ : ";
					cin >> username;
					ofstream file("score.txt", ios::app);
					file << left_time << "��-" << username << endl;
					break;
				}
				else {
					cout << "������ �ƴմϴ�." << endl;
					count++;
					cout << "���� ����:\n" << hangmanArt[count] << endl;
					continue;
				}
			}
			case(3): {
				cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
				break;
			}
			}
			if (timeover > 0)
				cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
			break;

		}
	}
	return 0;
}