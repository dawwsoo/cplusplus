//사칙연산 계산기 만들기
#include <iostream>
int main() {
	int num1 = 0;
	int num2 = 0;
	std::string cal = "";

	std::cout << " 두 수를 입력하세요. (숫자 한 번 입력 시 스페이스) \n";
	std::cin >> num1 >> num2;

	std::cout << " 연산자를 입력하세요. \n";
	std::cin >> cal;

	if (cal == "+") {
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
	}
	if (cal == "-") {
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";

	}
	if (cal == "/") {
		std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "..." << num1 % num2 << "\n";

	}
	if (cal == "*") {
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";

	}
}

//성별 확인하기
#include <iostream>
int main() {
	std::string name;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> name;

	if (name == "홍길동") {
		std::cout << "\n 남자";
	}
	else if (name == "성춘향") {
		std::cout << "\n 여자";
	}
	else {
		std::cout << "\n 모르겠어요.. ";
	}

