#include<iostream>

using namespace std;
class Shape {
public:
	Shape();
	int length;
	int	num_of_line;
	Shape(int a, int b) :num_of_line(a), length(b) {};
	void printinfo() {
		cout << "변의 개수 : " << num_of_line << endl<<length;
	}
};

class Rectangle : public Shape {
	
int height;
public:
Rectangle(int a) : height(a) ,Shape(length){};

	void area() {
		cout << length * height;

	}
};

class Triangle : public Shape {
	int height;
	Triangle(int a, int b) :Shape(length), height(b) {};

	void area() {
		cout << length * height/2;
	}
};


int main() {
	int a = 0;
	int b = 0;
	int x = 0;

	cout << "변의 개수를 입력하세요 : ";
	cin >> x;
	if x
}