#include<iostream>

struct Rectangle {
	float width = 0;
	float height = 0;

	
	/*float printXY() {
		std::cout << "가로, 세로 길이를 입력하세요 . :";
		std::cin >> width >> height;
		std::cout <<
			"넓이" << width * height;
	}*/

};

class Rectangle2 {
public:
	float width = 0;
	float height = 0;
	Rectangle2(float a, float b) : width(a), height( b) {};
	
	float area(){
	return width * height;
	}

	Rectangle2(Rectangle2& other) {
		width = other.width;
		height = other.height;
	}

};


int main() {
	float aa = 0;
	float bb = 0;
	std::cout << "가로, 세로 길이를 입력하세요 . : ";
	std::cin >> aa >>bb;
	Rectangle2 rec{ aa,bb };

	Rectangle2 rec2 = rec; // 복사 생성자
	

	std::cout << "넓이 : "<<rec2.area();
}
