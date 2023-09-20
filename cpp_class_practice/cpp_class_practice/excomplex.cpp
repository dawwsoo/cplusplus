//복소수
#include<iostream>

using namespace std;

class Complex {
public:
	
	//생성자 
	Complex() :real(0), imag(0) {}//초기화 목록이라고 한다, 밑에 생성자와 같은 역할
	Complex(double real_, double imag_) :real(real_), imag(imag_) {}
	//형식 알아두기 헤더는 그대로 가고 : , 로 연결 마지막엔 {}
	//this포인터를 쓰지 않아도 초기화 형식에서는 앞에 real 은 멤버변수만 올 수 있다고 보고 매개변수로 받지 않는다.

	/*Complex() {

		real = 0;
		imag = 0;
	}		*///이런 경우에는 매개변수 하나만 줘도 된다.
	//Complex(double real_, double imag_) {//얘도 생성자임
	//	//함수처럼 overriding 가능
	//	real = real_;
	//	imag = imag_;
	//}
	Complex(double real_ =0, double imag_ =0) {
		//디폴트 함수 매개변수의 값을 직접 주어지지 않아도 대입 가능
		// main함수에서 작동시 1번과 헷갈려서 모호성 에러 생김
		//함수처럼 overriding 가능
		//main에서 Complex c1;으로 사용

		real = real_;
		imag = imag_;
	}
	double GetReal() {
		return real;
	}
	void SetReal(double real_) {
		real = real_;

	}
	double GetImag() {
		return imag;
	}
	void SetImag(double imag_) {
		imag = imag_;
	}
private:
	double real;
	double imag;
};



int main() {
	int a(5);//<<변수 초기화 방법 중 하나 이것도 가능
	//다양한 생성자 활용
	//Complex c1;//이러면 초기화생성자가 실행된다
	Complex c2 = Complex(2);
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5{ 2,3 };
	//cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag()  <<endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;

}