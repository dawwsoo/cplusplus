//this 포인터에 대해 알아보자
//자기 객체 자신을 가리키는 포인터

#include<iostream>
using namespace std;

class MyClass {
public:
	void PrintThis() {
		cout << "내 주소는 " << this << endl;
	} //모든 함수에서 this pointer를 보이지 않는 매개변수의 형태로 받아놓는 것이다.
};

int main() {
	MyClass a, b;
	cout << "a의 주소는" << &a << endl;
	cout << "b의 주소는" << &b << endl;
	a.PrintThis();
	b.PrintThis();
}

