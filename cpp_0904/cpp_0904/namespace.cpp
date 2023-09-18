#include<iostream>


using namespace std; // 이 안에 있는 것들을 괄호 풀고 그냥 사용하겠다. 이거 위험해
using std::cout; // 좋은 습관 아님 주의 
namespace unique {
	std::string land;
	int code = 0;

}

namespace seoul {

	std::string land;
	std::string code;
}

//namespace 안에서 namespace를 만드는 것은 가능하지만 namespace안에서 불러오는 것은 불가하다.

namespace busan {

	std::string land;
	std::string code;
}

int main() {


	seoul::land = "남산";
	seoul::code = "02";
	busan::land = "해운대";
	busan::code = "0000";

	std::cout << seoul::land;
	std::cout << seoul::code;
	std::cout << busan::land;
	std::cout << busan::code;



}
//여러명이서 사용할때 유용한 것이다, 그래서 함수 이름이 겹칠때 구분을 꼭 해줘야 한다. 
//그 부분을 정확히 해두려고 함수나 변수 앞에 거쳐야 하는 이름을 만드는 거다

//using namespace std;
//통째로 가져올 때 사용하는 것이다. 권장하지 않는다는 것

