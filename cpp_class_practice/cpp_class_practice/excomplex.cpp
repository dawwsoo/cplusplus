//���Ҽ�
#include<iostream>

using namespace std;

class Complex {
public:
	
	//������ 
	Complex() :real(0), imag(0) {}//�ʱ�ȭ ����̶�� �Ѵ�, �ؿ� �����ڿ� ���� ����
	Complex(double real_, double imag_) :real(real_), imag(imag_) {}
	//���� �˾Ƶα� ����� �״�� ���� : , �� ���� �������� {}
	//this�����͸� ���� �ʾƵ� �ʱ�ȭ ���Ŀ����� �տ� real �� ��������� �� �� �ִٰ� ���� �Ű������� ���� �ʴ´�.

	/*Complex() {

		real = 0;
		imag = 0;
	}		*///�̷� ��쿡�� �Ű����� �ϳ��� �൵ �ȴ�.
	//Complex(double real_, double imag_) {//�굵 ��������
	//	//�Լ�ó�� overriding ����
	//	real = real_;
	//	imag = imag_;
	//}
	Complex(double real_ =0, double imag_ =0) {
		//����Ʈ �Լ� �Ű������� ���� ���� �־����� �ʾƵ� ���� ����
		// main�Լ����� �۵��� 1���� �򰥷��� ��ȣ�� ���� ����
		//�Լ�ó�� overriding ����
		//main���� Complex c1;���� ���

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
	int a(5);//<<���� �ʱ�ȭ ��� �� �ϳ� �̰͵� ����
	//�پ��� ������ Ȱ��
	//Complex c1;//�̷��� �ʱ�ȭ�����ڰ� ����ȴ�
	Complex c2 = Complex(2);
	Complex c3(2, 3);
	Complex c4 = { 2,3 };
	Complex c5{ 2,3 };
	//cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag()  <<endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;

}