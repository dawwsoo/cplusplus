
//const�� ���̸� ����� ������ �Ǿ� ���� �ٲ� �� ����. �� �ٸ� ���ӻ��� �˾ƺ���
// 1. �Ű������� ���ȭ (��� �Լ��� ���� ��� ������ ���)
// 2. �޼����� ���ȭ (�޼���� Ŭ������ ���Ե� �Լ�)(��� �޼��忡 ���ؼ��� ��� ������ ���)

#include<iostream>
using namespace std;

class Account {

public:
	Account() :money(0) {}
	Account(int money) :money(money) {}

	void Deposit(const int d) {// ���� d�� ���� �ٲ�� �ȵ�
		money += d;
		cout << d << "���� �����߽��ϴ�" << endl;
	}

	void Draw(int d) {
		if (money >= d) {
			money -= d;
			cout << d << "���� �����߽��ϴ�" << endl;
		}
	}

	int ViewMoney() const{//�Ϲ����� ������ ������ �ٲٸ� �ȵ� �� ._ ��ȣ �ڿ� const ���̴� �� ������ !
		return money;
	}

private:
	int money;//�ܾ� ����
};


int main() {
	Account soo(100);

	soo.Deposit(100);
	soo.Draw(30);

	cout << "viewMoney: " << soo.ViewMoney() << endl;



}

