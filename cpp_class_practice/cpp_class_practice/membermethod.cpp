
//��� �޼����� ���� ������ �и��ϴ� ��� �� 90 % �̻��̴�.
#include<iostream>
using namespace std;


class Vector2 {
public:
	Vector2();
	Vector2(float x, float y) : x(x), y(y) {}

	//����ΰ� ���� �и��ϱ� ��� ���ܳ��� Vector2(float x, float y) : x(x), y(y) {}

	float GetX()const;//get�Լ��� const�� �ϴ� �� ���� const�� ������ �Լ��� ��� ���ִ� ���� ����/const�� ����ο�
	float GetY()const; 

	static Vector2 Sum(Vector2 a, Vector2 b) {//���� Ȱ���ؼ� ���ϱ� _ ���� �޼ҵ�
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
