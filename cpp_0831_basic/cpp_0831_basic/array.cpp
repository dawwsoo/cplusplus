/*city라는 배열 변수를 만들고 5개의 나라 이름을 값으로 지정
for문 혹은 for - each문을 활용하여 city 안의 원소 출력*/
std::string city[] = { "한국","미국","italy","france","영국" };
for (std::string ct : city) {
	std::cout << ct << "\n";
}
//city2라는 배열 변수를 만들고 5개의 나라를 받아 city 안 원소 출력

std::string a;
std::string b;
std::string c;
std::string d;
std::string e;


std::cout << "나라 5개를 입력하세요. \n";
std::cin >> a >> b >> c >> d >> e;

std::string city2[] = { a,b,c,d,e };



for (std::string ct : city2) {
	std::cout << ct << "\n";
}



//반 학생들의 성적을 입력받고 평균 내기

int grade[] = { 1,2,3,4,5 };
int i; int j; int t;
int sum = 0;

for (i = 1; i <= 5; i++) {
	std::cout << i << "번 학생의 성적을 입력하세요: ";
	std::cin >> t;
	grade[i - 1] = t;
	std::cout << grade[i - 1] << std::endl;

}

for (j = 0; j < i - 1; j++) {
	sum = sum + grade[j];
}
std::cout << sum << std::endl;
std::cout << "성적 평균 : " << (float)sum / (float)5;



/////리더님이 깔끔한 표기법으로 바꿔주심/////////////
/*	int array_size = 5;
	int grade[] = { 1,2,3,4,5 };
	int a; int b; int c; int d; int e;
	int i; int j; int result;
	int sum = 0;

	for (i = 0; i < array_size; i++) {
		std::cout << i + 1 << "번 학생의 성적을 입력하세요: ";
		std::cin >> result;
		grade[i] = result;
	}

	for (j = 0; j < array_size; j++) {
		sum = sum + grade[j];
	}

	float average = (float)sum / (float)array_size;
	std::cout << "성적 평균 : " << average;*/
