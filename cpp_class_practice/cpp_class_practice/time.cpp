//��h ��m ��s 
//get set �Լ��� �̹��� ������� �ʰ� �����ڿ� �ָ��� ������

#include<iostream>
using namespace std;

class Time {
public:
	// 5�ʿ��� 0�ð� 0�� 5�ʷ� (0,0,5)�� ����ϱ� ������
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

	//���� �� ���� ����� �κ��� ������ ������ �����̶�� ���� �غ� ���̴�,
	//Ư���� �����ڿ��� �ڱ� Ŭ���� ���� �ٸ� �����ڸ� ȣ���� �� �ִ� ���

	
	
	// ������ ����
	//�ݷ� ������ ������ ���� Ȯ���Ѵ�. �׷��� �����   
	Time() :h(0), m(0), s(0) {}
	Time(int s_):Time(){
		s = s_;
	}
	Time(int m_,int s_ ):Time(s_) {
		m = m_;
	}
	Time(int h_, int m_, int s_):Time(m_,s_){//�ʱ�ȭ ���İ� �򰥸��� ���� �ʱ�ȭ�� m(m_),s(s_)
		h = h_;
	}
private:
	int h;
	int m;
	int s;
};