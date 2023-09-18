//#include<iostream>
//
//
//class rectangle2 {
//public:
//	float width = 0;
//	float height = 0;
//	rectangle2(float a, float b) : width(a), height(b) {};
//
//	float getwidth() {
//		return width;
//	}
//
//	float getheight() {
//		return height;
//	}
//
//	float setwidth(float width) {
//		this->width= width;
//	}
//
//	float setheight(float height) {
//		this->height = height;
//	}
//
//	//rectangle2(rectangle2& other) {
//	//	width = other.width;
//	//	height = other.height;
//	//}
//
//
//	float area() {
//		return width * height;
//	}
//};


	int main() {
		float aa = 0;
		float bb = 0;
		std::cout << "가로, 세로 길이를 입력하세요 . : ";
		std::cin >> aa >> bb;
		rectangle2 rec{ aa,bb };

		std::cout << "넓이 : " << rec.area(1,2);