//��Ģ���� ���� �����
#include <iostream>
int main() {
	int num1 = 0;
	int num2 = 0;
	std::string cal = "";

	std::cout << " �� ���� �Է��ϼ���. (���� �� �� �Է� �� �����̽�) \n";
	std::cin >> num1 >> num2;

	std::cout << " �����ڸ� �Է��ϼ���. \n";
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

//���� Ȯ���ϱ�
#include <iostream>
int main() {
	std::string name;
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> name;

	if (name == "ȫ�浿") {
		std::cout << "\n ����";
	}
	else if (name == "������") {
		std::cout << "\n ����";
	}
	else {
		std::cout << "\n �𸣰ھ��.. ";
	}

