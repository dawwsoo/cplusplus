#include <iostream>
#include<vector>
#include<ctime>
/*간단한 설계
베스킨라빈스 31 게임
배열을 만들고 31번째 배열 꺼낼 때 종료*/

int order(int &arr[], int k) {

	k++;
}


using namespace std;
int main()
{
	int arr[31] = { 0 };
	int user = 0;
	srand(time(NULL));
	int random = rand()%3+1;
	int order = 0;

	for (int i = 0; i < 31;i++) {
		arr[i] = i + 1;
	}

	cout << "부를 숫자의 개수를 선택하세요 (1,2,3) : \n";
	cin >> user;
	switch (user) {
	case 1:

		break;
	case 2:
		break;
	case 3:
		break;
	}

	cout << "컴퓨터 숫자" << endl;
   
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
