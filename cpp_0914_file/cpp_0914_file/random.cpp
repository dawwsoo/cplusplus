#include<iostream>
#include<ctime>

int main() {
	std::srand(time(NULL));
	int random = std::rand();

	int num = random % 30 + 1;//rand max�� �����ϴ� ���
	for (int i = 1; i < 40; i++) {
		std::srand(time(NULL));
		int random = std::rand();

		std::cout << num;
	}
}