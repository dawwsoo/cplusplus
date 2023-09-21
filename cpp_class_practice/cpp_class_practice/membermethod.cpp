
//멤버 메서드의 선언 정리를 분리하는 경우 가 90 % 이상이다.
#include<iostream>
using namespace std;


class Vector2 {
public:
	Vector2();
	Vector2(float x, float y) : x(x), y(y) {}

	//선언부과 정의 분리하기 헤더 남겨놓고 Vector2(float x, float y) : x(x), y(y) {}

	float GetX()const;//get함수는 const로 하는 게 좋고 const가 가능한 함수는 모두 해주는 것이 좋다/const는 선언부에
	float GetY()const; 

	static Vector2 Sum(Vector2 a, Vector2 b) {//나를 활용해서 더하기 _ 동적 메소드
		return Vector2(a.x + b.x, a.y + b.y);
	}

private:
	float x;
	float y;
};
int main() {

}



Vector2::Vector2():x(0), y(0) {}
Vector2::Vector2(float x, float y) :x(x), y(y) {}
float Vector2::GetX()const { return x; }
float Vector2::GetY() const { return y; }
