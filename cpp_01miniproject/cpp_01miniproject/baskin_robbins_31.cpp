//#include <iostream>
//#include<vector>
//#include<ctime>
///*간단한 설계
//베스킨라빈스 31 게임
//배열을 만들고 31번째 배열 꺼낼 때 종료*/
//
////인덱스 숫자와 헷갈리지 말자.
////함수이름과 사용하는 변수명이 같은 게 있으면 포인터 쓰라고 오류뜬다.
//
//
////저기 array 반복되는 부분 함수로 만들어서 사용해도 됨
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
//			cout << "사용자가 부를 숫자! \n 31 \n> 게임 종료! 컴퓨터 승리";
//			break;
//		}
//		cout << "부를 숫자의 개수를 선택하세요 (1,2,3) : \n";
//		cin >> user;
//		while ((user < 1) || (user > 3)) {
//			cout << "1~3사이의 수를 입력하세요" << endl;
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
//			cout << "컴퓨터가 부른 숫자! \n 31 \n> 게임 종료! 사용자 승리";
//			break;
//		}
//		cout << "컴퓨터 숫자" << endl;
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
