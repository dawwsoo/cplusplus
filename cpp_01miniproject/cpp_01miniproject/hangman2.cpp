#include<iostream>
#include<vector>
#include<ctime>
#include<fstream>
#include<string>
using namespace std;
using std::string;

// 행맨 그림을 저장하는 벡터

vector<string> hangmanArt = {
	"  +---+\n  |   |\n      |\n      |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n_________",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\nㅁ    |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\nㅁ ㅁ |\n========="
};

int main() {
	ifstream file_r("fruit.txt");
	string str;
	vector<string> comp;
	comp.clear();

	int timer = 0; //타이머

	while (file_r >> str) { //파일 받아오기 단어 comp 벡터에 저장시켜
		comp.insert(comp.begin(), str);
	};

	file_r.close();

	srand(time(NULL));// srand가 앞에 와야한다.

	int ran = rand();
	int random = ran % comp.size(); //comp 벡터에 들어간 과일 단어 수 만큼 랜덤하게 돌려주기

	string correct = comp[random]; //정답 단어 선택하기

	int word_size = correct.size();
	cout << "단어의 글자 수는 " << word_size << "입니다." << endl << endl;
	vector<string> user_word(word_size); // 단어 글자수는 맞춰주기
	user_word.clear();

	string user; //사용자 입력 단어
	string alpha; //사용자가 입력하는 알파벳
	int count = 0; // 행맨 사라지는 count
	int table_num = 1;// 사용자 목차 선택
	string show;
	show.clear();
	for (int i = 0; i < word_size; i++) {
		show.push_back('=');
	}
	cout << "영어 단어 : 과일 " << endl;
	//cout << show<<endl;
	//for (int i = 0; i < word_size; i++) {
	//	cout << " " << "_" << " "; //알파벳을 맞췄다면 _자리에 알파벳이 들어간다.
	//};
	int have = 0;
	vector<int> spot; //알파벳이 중복으로 있는 위치를 저장하기 위한 벡터
	spot.clear();
	clock_t startTime = clock(); //시작 시간
	int timeover =0;

	while (1) {
		if (count >= 8) {
			cout << "-----------------------G A M E O V E R--------------------------"<<endl;
			cout << "아쉽군요 ! 정답은 " << correct << "입니다. 이용해 주셔서 감사합니다." << endl;
				break;
		}
		cout << "--------------------------------------------------------------\n" << "| 1. 알파벳 찾기 " << endl << "| 2. 단어 맞추기" << endl << "| 3. 단어 확인 및 종료 ! " << endl << "| 원하시는 번호를 선택하세요 . : ";
		// 항목 선택 가능
		cin >> table_num;
		cout << endl;
		switch (table_num) {
		case(1): {
			cout << "알파벳을 입력하세요 . : ";
			cin >> alpha;
			cout << endl;
			have = correct.find(alpha);
			clock_t endTime = clock(); //종료 시간
			int timer = (endTime - startTime) / CLOCKS_PER_SEC; //시간의 차
			int left_time = 100 - timer;
			if (have == string::npos) {
				cout << "해당 알파벳은 없습니다. " << endl;
				cout << "남은 시간 : " << left_time << endl << endl; //남은 시간 출력
				if (left_time < 0) {
					cout << "T - I - M - E        O - V - E - R"<<endl;
					timeover++;
					break;
				}
				count++;
				cout << "현재 상태:\n" << hangmanArt[count] << endl;
				if (count >= 8)
					continue;
				cout << show<<endl;
			}
			else {
				cout << alpha << "가 존재합니다. " << endl;
				cout << "남은 시간 : " << left_time << endl << endl; //남은 시간 출력
				cout << "현재 상태:\n" << hangmanArt[count] << endl;

				while (have != string::npos) {
					spot.insert(spot.begin(), have);
					have = correct.find(alpha, have + 1);
				}
				for (auto i : spot) {
					show.replace(i, 1, alpha);//인덱스 번호가 바로 들어와야 한다.}
				}
				cout << show << endl;
				if (show == correct) {
					cout << "## 축하합니다 ! 정답입니다 ##" << endl;
					break;
				}
				spot.clear();
			}
			continue;
		}
		case(2): {
			cout << "답을 입력해주세요 : ";
			cin >> user;
			cout << endl;
			clock_t endTime = clock(); //종료 시간
			int timer = (endTime - startTime) / CLOCKS_PER_SEC; //시간의 차
			int left_time = 100 - timer;
			if (left_time < 0) {
				cout << "T - I - M - E        O - V - E - R"<<endl;
				timeover++;
				break;
			}
			cout << "남은 시간 : " <<left_time << endl << endl; //남은 시간 출력

			if (user == correct) {
				cout << "## 축하합니다 ! 정답입니다 ##" << endl;
				break;
			}
			else {
				cout << "정답이 아닙니다." << endl;
				count++;
				cout << "현재 상태:\n" << hangmanArt[count] << endl;
				if (count >= 8)
					continue;
				cout << show << endl;
				continue;
			}
		}
		case(3): {
			cout << "아쉽군요 ! 다음에 만나요 !" << endl;
			break;
		}}
		if (timeover<0)
			cout << "아쉽군요 ! 정답은 " << correct << "입니다. 이용해 주셔서 감사합니다." << endl;
		break;
	}
	return 0;
}