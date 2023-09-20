//정적 멤버 (1)

/*클래스에 포함되는 멤버들은 정적이거나 동적이거나 모두 가능
지금까지 다룬 것은 동적멤버 _객체라고 생각해도 된다 자료형들이 있었으니
정적멤버는 붕어빵 틀에 해당되는 멤버
전역으로 된 표현을 클래스 안으로 집어넣고 싶을때 사용 가능*/

#include<iostream>
using namespace std;

//0~1사이 값을 갖는 float R G B 로 저장할 거임

//int idCounter = 1; //전역변수 설정_ 객체지향언어에서는 전역변수 사용을 최대한 지양해야 한다.그리고 class와 관련있는 변수 이므로,

class Color {
public:
	Color() :r(0), g(0), b(0), id(idCounter++) { }//{id = idCounter++;} 이렇게 해도 되지만

	Color(float r, float g, float b) :r(r), g(g), b(b), id(idCounter++) {}// 매개변수는 회색 멤버변수는 흰색

	//색을 바꾸는 경우가 온다면 새로운 함수를 만들겠다해서 set은 패스할게
	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() {
		return id;
	}
	
	static int idCounter;//정적으로 선언된 것은 클래스 안에서 값을 대입해 줄 수 없다, 초기값을 주려면 class 밖으로 나가야한다.class 이름 자체가 namespace처럼 작동한다.
	//가장 큰 장점 : 전역변수를 사용하지 않았다는 것

	static Color MixColors(Color a, Color b) { //객체에 관련된게 아니라 클래스에 관련된 거라 초기화 형식에 들어가지 않음
		return  Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

private:
	float r;
	float g;
	float b;

	int id; //만들어진 순으로 번호를 매기려고 해

	};

int Color::idCounter = 1; //namespace에서 선언과 정의를 분리시킬때 사용한 방법과 같다.
	/*
	Color MixColors(Color a, Color b) {
		return  Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	지금 class Color 와 너무 연관있잖아 그래서 class안에 넣으려고 해 그때 static 사용_ 장점 private field에 접근 가능하니 get을 사용하지 않아도 됨

		//Color res((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
		//return res;

		//int a = 5;
		//return a;
		//== return 5; (인 것 처럼 변수 만들지 말고 그냥 리턴하자)

	}*/

	int main() {
		Color red(1, 0, 0);
		Color blue(0, 0, 1);

		//Color purple = MixColors(blue, red);


		Color purple = Color::MixColors(blue, red); //static 호출 시에는 namespace 처럼 콜론 두 번 사용
		cout << " r= " << purple.GetR() << " g= " << purple.GetG() << " b= " << purple.GetB() << endl;

		cout << "red.GetId() = " << red.GetId() << endl;
		cout << "blue.GetId() = " << blue.GetId() << endl;
		cout << "purple.GetId() = " << purple.GetId() << endl;

	}

