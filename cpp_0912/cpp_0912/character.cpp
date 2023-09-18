//#include<iostream>
//using namespace std;
//class Character {
//	string name;
//	int level = 0;
//	int item_num = 0;
//
//public :
//	Character(string n , int a, int b) : name(n), level(a), item_num(b){};
//	
//	void setName(string name) {
//		this->name = name;
//	}
//	void setLevel(int level) {
//		this->level = level;
//	}
//	void setItem_num(int item_num) {
//		this->item_num = item_num;
//	}
//
//
//	string getName() {
//		return name;
//	}
//	int getLevel() {
//		return level;
//	}
//	int getItem_num() {
//		return item_num;
//	}
//};
//
//int main() {
//	string name_1;
//	string name_m;
//	int number = 20;
//	cout << "캐릭터 이름을 입력하세요. : ";
//		cin >> name_1;
//	cout<< "\n1.이름변경\n2.level up\n3.get item\n4.use item\n5.my Character\n0.EXIT"<<endl;
//
//
//	int lev = 0;
//	int item = 0;
//	Character soo{ name_1, lev, item  };
//
//	while (number != 0) {
//		cout << "번호를 입력하세요 . : ";
//		cin >> number;
//		if (soo.getItem_num() < 0) {
//			cout << "아이템 부족으로 게임 종료!" << endl;
//			break;
//		}
//		else if (number == 1) {
//			cout << "New name : ";
//			cin >> name_m;
//			soo.setName(name_m);
//		}
//		else if (number == 2) {
//			lev++;
//			soo.setLevel(lev);
//		}
//		else if (number == 3) {
//			item++;
//			soo.setItem_num(item);
//		}
//		else if (number == 4) {
//			item--;
//			soo.setItem_num(item);
//		}
//		else if (number == 5)
//			cout << "닉네임 : " << soo.getName() << endl << "현재 레벨 : " << soo.getLevel() << endl << "남은 아이템 수 :" << soo.getItem_num()<<endl;
//
//		else
//			cout << "잘못 입력하셨습니다 " << endl;
//		}
//	}
