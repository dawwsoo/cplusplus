
//const를 붙이면 상수형 변수가 되어 값을 바꿀 수 없다. 또 다른 쓰임새를 알아보자
// 1. 매개변수의 상수화 (모든 함수에 대해 사용 가능한 기능)
// 2. 메서드의 상수화 (메서드는 클래스에 포함된 함수)(멤버 메서드에 대해서만 사용 가능한 기능)

#include<iostream>
using namespace std;

class Account {

public:
	Account() :money(0) {}
	Account(int money) :money(money) {}

	void Deposit(const int d) {// 들어온 d는 절대 바뀌면 안돼
		money += d;
		cout << d << "원을 예금했습니다" << endl;
	}

	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "원을 인출했습니다" << endl;
		}
	}

	int ViewMoney() const{//일반적인 변수를 가져다 바꾸면 안될 때 ._ 괄호 뒤에 const 붙이는 것 잊지마 !
		return money;
	}

private:
	int money;//잔액 저장
};


int main() {
	Account soo(100);

	soo.Deposit(100);
	soo.Draw(30);

	cout << "viewMoney: " << soo.ViewMoney() << endl;



}

