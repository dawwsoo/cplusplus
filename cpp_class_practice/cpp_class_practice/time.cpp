//시h 분m 초s 
//get set 함수는 이번에 사용하지 않고 생성자에 주목해 보겠음

#include<iostream>
using namespace std;

class Time {
public:
	// 5초여도 0시간 0분 5초로 (0,0,5)가 사용하기 싫을때
	/*Time() :h(0), m(0), s(0) {}
	Time(int s_){
		s = s_;
		}
	Time(int s_, int m_) {
		s = s_;
		m = m_;
	}
	Time(int h_, int m_,int s_){
		s = s_;
		m = m_;
		h = h_;
	}*/

	//위에 두 개가 공통된 부분이 있으니 생성자 위임이라는 것을 해볼 것이다,
	//특정한 생성자에서 자기 클래스 내에 다른 생성자를 호출할 수 있는 기능

	
	
	// 생성자 위임
	//콜론 다음의 내용을 먼저 확인한다. 그래서 덮어쓰기   
	Time() :h(0), m(0), s(0) {}
	Time(int s_):Time(){
		s = s_;
	}
	Time(int m_,int s_ ):Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_):Time(m_,s_){//초기화 형식과 헷갈리지 말자 초기화는 m(m_),s(s_)
		h = h_;
	}
private:
	int h;
	int m;
	int s;
};