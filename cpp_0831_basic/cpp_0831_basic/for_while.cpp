//������ for���� while ������ ¥��
//for ��//


int k = 0;
int j = 0;
for (k = 1; k <= 9; k++) {
	std::cout << "\n" << k << "��";
	for (j = 1; j <= 9; j++) {
		std::cout << "\n" << k << " X " << j << " = " << k * j;
	}
	std::cout << "\n";
}

//while ��//


int k = 1;

while (k <= 9) {
	std::cout << "\n" << k << "��";
	int j = 1;
	while (j <= 9) {
		std::cout << "\n" << k << " X " << j << " = " << k * j;
		j++;
	}
	k++;
	std::cout << "\n";

}


//����ڿ��� ������ �Է¹޾� 1���� n���� �� ���ϱ� for��.while��




int i = 1;
int num = 0;
int sum = 0;

std::cout << "1���� n���� �� ���ϱ�";
std::cout << "����(���� ����)�� �Է��ϼ��� \n";
std::cin >> num;

//for��///
for (i = 1; i <= num; i++) {
	sum = sum + i;

}


//while��//
while (i <= num) {
	sum = sum + i;
	i++;
}
std::cout << "\n 1���� " << num << "������ ���� : " << sum;


	}

	����ڰ� �Է��� ���� 0�� �ƴ� ������� ��� ���� ��
#include <iostream>

		int main() {
		std::cout << "����ڰ� �Է��� ���� ���ϱ� \n\n";

		int sum = 0;
		int i = 0;
		while (1) {

			std::cout << "���ڸ� �Է��ϼ���(0: exit) : ";
			std::cin >> i;

			if (i == 0) {
				break;
			}

			sum = sum + i;

			std::cout << "����ڰ� �Է��� ���� ���� : " << sum;
		}

	//	���׸��� ? ? ? ? ? ? ? ? ���� �𸣰���

			//std::string p = "*";
			//for (j=1;j<=k;j++){
			//	for (k==i; k<=i;k--) {
			//		std::cout << "*";
			//			}
			//	}
			//}
			//
			int i = 0;
		std::cout << "input : ";
		std::cin >> i;
		std::cout << "output : \n";


		int k = 0;
		int j = 0;
		int t = 0;
		for (j = 0; j <= i; j++) {
			for (t = j; t < i; t++) {
				std::cout << " + ";
			}
			for (k = i - j; k < i; k++) {
				std::cout << " - ";
			}
			std::cout << "\n";
