동적배열 할당방법과 삭제 기초

int x = 0;
int y = 0;
std::cout << "x를 입력하세요. : \n";
std::cin >> x;
std::cout << "y를 입력하세요. : \n";
std::cin >> y;


while (x <= 0 || y <= 0) {
	std::cout << "x와 y 모두 양수를 입력해주세요.";
	std::cout << "x를 입력하세요. : \n";
	std::cin >> x;
	std::cout << "y를 입력하세요. : \n";
	std::cin >> y;
}

int** arr = new int* [x];

for (int i = 0; i < x; i++) {
	arr[i] = new int[y];
}
int k = 1;

for (int i = 0; i < x; i++) {
	for (int j = 0; j < y; j++) {
		arr[i][j] = k;
		k++;
	}
}

for (int i = 0; i < x; i++) {
	for (int j = 0; j < y; j++) {
		std::cout << arr[i][j] << "  ";
	}
	std::cout << "\n";
}

for (int i = 0; i < x; i++) {
	delete[] arr[i];
}
delete[] arr;
}
학생 수 받고 점수 저장해서 평균 내기(앞에 배열에서 한 거 업그레이드)

int num = 0;
int sum = 0;
int score = 0;
int average = 0;


std::cout << "몇 명의 학생 입니까? : ";
std::cin >> num;

int** student_score = new int* [num];

for (int i = 0; i < num; i++) {
	student_score[i] = new int[num];
}
//이차원 배열에서는 각각 할당 무조건
//변수 받아주고 나서 할당해줘야한다 #!

for (int i = 0; i < num; i++) {
	std::cout << i + 1 << "번 학생의 성적을 입력하세요 : ";
	std::cin >> student_score[i][i];
}

for (int i = 0; i < num; i++) {
	sum = sum + student_score[i][i];
}

average = sum / num;
std::cout << "전체 학생 평균 = " << average;


for (int i = 0; i < num; i++) {
	delete[] student_score[i];
}
delete[] student_score;

}
