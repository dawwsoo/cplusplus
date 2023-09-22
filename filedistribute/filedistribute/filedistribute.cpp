#include<iostream>
#include"A.h"

using namespace std;
// 기능상 안중요한 art같은 것들은 그냥 함수로 만들어서 다른 cpp폴더에 넣어버리기
class A {
	int a;
	

	void print() {
		cout << "say something\n";
	}
};
//class A를 위해 헤더와 cpp파일을 만든다고 하자


void main()
{
	A b;
}