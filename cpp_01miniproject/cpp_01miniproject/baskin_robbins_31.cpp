//#include <iostream>
//#include<vector>
//#include<ctime>
///*������ ����
//����Ų��� 31 ����
//�迭�� ����� 31��° �迭 ���� �� ����*/
//
////�ε��� ���ڿ� �򰥸��� ����.
////�Լ��̸��� ����ϴ� �������� ���� �� ������ ������ ����� �������.
//
//
////���� array �ݺ��Ǵ� �κ� �Լ��� ���� ����ص� ��
//
//using namespace std;
//int main()
//{
//	int arr[31] = { 0 };
//	int user = 0;
//	srand(time(NULL));
//	int ran = rand();
//	int random = ran % 3 + 1;
//	int order = 0;
//
//	for (int i = 0; i < 31; i++) {
//		arr[i] = i + 1;
//	}
//	while (order != 31) {
//		if (order == 30) {
//			cout << "����ڰ� �θ� ����! \n 31 \n> ���� ����! ��ǻ�� �¸�";
//			break;
//		}
//		cout << "�θ� ������ ������ �����ϼ��� (1,2,3) : \n";
//		cin >> user;
//		while ((user < 1) || (user > 3)) {
//			cout << "1~3������ ���� �Է��ϼ���" << endl;
//			cin >> user;
//		}
//		cout << endl << "*******************************" << endl;
//
//		switch (user) {
//		case 1:
//
//			cout << arr[order] << endl;
//			order++;
//			break;
//		case 2:
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			break;
//		case 3:
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			break;
//
//		}
//
//		cout << endl << "*******************************" << endl;
//
//		if (order == 30) {
//			cout << "��ǻ�Ͱ� �θ� ����! \n 31 \n> ���� ����! ����� �¸�";
//			break;
//		}
//		cout << "��ǻ�� ����" << endl;
//		int random = rand() % 3 + 1;
//		switch (random) {
//		case 1:
//
//			cout << arr[order] << endl;
//			order++;
//			break;
//		case 2:
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			break;
//		case 3:
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			cout << arr[order] << endl;
//			order++;
//			break;
//
//		}
//		cout << endl << "*******************************" << endl;
//	}
//}
