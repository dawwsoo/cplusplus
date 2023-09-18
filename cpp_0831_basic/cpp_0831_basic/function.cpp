//입력받은 4개 정수 중 가장 작은 수 구하기
#include <iostream>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float divide(float a, float b) {
	return (float)a / (float)b;
}

int min(int a, int b, int c, int d) {
	int k = 0;
	int p = 0;
	int min = 0;
	a >= b ? k = b : k = a;
	c >= d ? p = d : p = c;
	k >= p ? min = p : min = k;
	return min;
}

int main() {



	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cout << "정수 네 개를 입력하세요. : ";
	std::cin >> a >> b >> c >> d;
	std::cout << min(a, b, c, d) << "입니다.";
}

//함수를 이용해 짝수 홀수 판별하기
//설명 : main함수 앞에 헤더는 써줘야지 main함수 내에서 사용 가능하다.함수 자체는 순서가 중요하지 않지만_!

#include<iostream>
std::string even(int c);
int main() {
	int x;
	int y = 0;
	std::cin >> x >> y;


	std::cout << add(x, y) << "\n" << sub(x, y) << "\n" << mul(x, y) << "\n" << divide(x, y);

	int k;
	std::cin >> k;
	std::cout << even(k); std::string even(int c) {
		if (c % 2 == 0)
			return "짝수";
		else
			return "홀수";

	}
