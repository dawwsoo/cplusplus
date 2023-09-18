//구구단 for문과 while 문으로 짜기
//for 문//


int k = 0;
int j = 0;
for (k = 1; k <= 9; k++) {
	std::cout << "\n" << k << "단";
	for (j = 1; j <= 9; j++) {
		std::cout << "\n" << k << " X " << j << " = " << k * j;
	}
	std::cout << "\n";
}

//while 문//


int k = 1;

while (k <= 9) {
	std::cout << "\n" << k << "단";
	int j = 1;
	while (j <= 9) {
		std::cout << "\n" << k << " X " << j << " = " << k * j;
		j++;
	}
	k++;
	std::cout << "\n";

}


//사용자에게 정수를 입력받아 1부터 n까지 합 구하기 for문.while문




int i = 1;
int num = 0;
int sum = 0;

std::cout << "1부터 n까지 합 구하기";
std::cout << "숫자(양의 정수)를 입력하세요 \n";
std::cin >> num;

//for문///
for (i = 1; i <= num; i++) {
	sum = sum + i;

}


//while문//
while (i <= num) {
	sum = sum + i;
	i++;
}
std::cout << "\n 1부터 " << num << "까지의 합은 : " << sum;


	}

	사용자가 입력한 수가 0이 아닌 정수라면 모두 합한 값
#include <iostream>

		int main() {
		std::cout << "사용자가 입력한 숫자 더하기 \n\n";

		int sum = 0;
		int i = 0;
		while (1) {

			std::cout << "숫자를 입력하세요(0: exit) : ";
			std::cin >> i;

			if (i == 0) {
				break;
			}

			sum = sum + i;

			std::cout << "사용자가 입력한 수의 합은 : " << sum;
		}

	//	별그리기 ? ? ? ? ? ? ? ? 뭔지 모르겠음

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
