�����迭 �Ҵ����� ���� ����

int x = 0;
int y = 0;
std::cout << "x�� �Է��ϼ���. : \n";
std::cin >> x;
std::cout << "y�� �Է��ϼ���. : \n";
std::cin >> y;


while (x <= 0 || y <= 0) {
	std::cout << "x�� y ��� ����� �Է����ּ���.";
	std::cout << "x�� �Է��ϼ���. : \n";
	std::cin >> x;
	std::cout << "y�� �Է��ϼ���. : \n";
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
�л� �� �ް� ���� �����ؼ� ��� ����(�տ� �迭���� �� �� ���׷��̵�)

int num = 0;
int sum = 0;
int score = 0;
int average = 0;


std::cout << "�� ���� �л� �Դϱ�? : ";
std::cin >> num;

int** student_score = new int* [num];

for (int i = 0; i < num; i++) {
	student_score[i] = new int[num];
}
//������ �迭������ ���� �Ҵ� ������
//���� �޾��ְ� ���� �Ҵ�������Ѵ� #!

for (int i = 0; i < num; i++) {
	std::cout << i + 1 << "�� �л��� ������ �Է��ϼ��� : ";
	std::cin >> student_score[i][i];
}

for (int i = 0; i < num; i++) {
	sum = sum + student_score[i][i];
}

average = sum / num;
std::cout << "��ü �л� ��� = " << average;


for (int i = 0; i < num; i++) {
	delete[] student_score[i];
}
delete[] student_score;

}
