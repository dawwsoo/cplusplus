#pragma once
//헤더파일 이름은 클래스이름과 똑같은게 정석
#include<iostream>
using namespace std;



int  add(int a, int b);
// 
// 
//헤더에는 선언과 변수 선언
//class안에 함수 마다 남겨주기
//바디영역은 남겨두는 거야
class A {
	int a = 0;
	// 함수는 클래스안에 메소드로 만들어버리자
	
public:
	void print();
	A() {}; //생성자 헤더에 남기는 방법
};
//class A를 위해 헤더와 cpp파일을 만든다고 하자
//class 안에 있는 변수는 




//우선 헤더와 바디
// 
//head,원형, proto-type___ 이름과 입력값이 있는 곳
int add(int a, int b);

