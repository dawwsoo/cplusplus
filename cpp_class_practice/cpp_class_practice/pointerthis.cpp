//this �����Ϳ� ���� �˾ƺ���
//�ڱ� ��ü �ڽ��� ����Ű�� ������

#include<iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "�� �ּҴ� " << this << endl;
	} //��� �Լ����� this pointer�� ������ �ʴ� �Ű������� ���·� �޾Ƴ��� ���̴�.
};

int main() {
	MyClass a, b;
	cout << "a�� �ּҴ�" << &a << endl;
	cout << "b�� �ּҴ�" << &b << endl;
	a.PrintThis();
	b.PrintThis();
}

