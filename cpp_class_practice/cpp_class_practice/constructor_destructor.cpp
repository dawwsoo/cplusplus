//생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

#include<iostream>
using namespace std;

class MyClass {
public:
	//생성자
	MyClass(){}//일반적인 함수(method)와 비슷해 보이지만 반환하는 자료형 없음

	//소멸자
	~MyClass()
	{
		cout << "소멸자가 호출되었다";
	}
};

//MyClass globalObj; //전역 object는 실행해보면 main 함수가 시작되기도 전에 생성이 되어 끝나면 소멸되는 것을 확인할 수 있다.

void testlocalObj() {//지역 객체의 생성과 소멸을 테스트하기위한 함수
	cout << "testlocalObj 시작" << endl;
	MyClass localObj;
	cout << "testlocalObj 끝" << endl;
}
	int main(){//전역 변수
	cout << "main함수 시작!" << endl;
	testlocalObj(); 
		cout << "main함수 끝!" << endl; 
}

	/*전역변수는 프로그램 전체에서 접근 가능하고, 지역변수는 해당 함수 내에서만 접근 가능합니다.
전역변수는 프로그램이 종료될 때까지 메모리에 존재하고, 지역변수는 함수가 종료되면 소멸합니다.*/


	//아무런 형식이 없지만 생성자와 소멸자가 기본으로 실행되는 것을 알 수 있다,.
	//쓰임새: 멤버 변수 초기화 하는 일 하기가 좋음 _가장 처음 실행되니까
	//소멸자: 메모리 해제에 좋겠죠