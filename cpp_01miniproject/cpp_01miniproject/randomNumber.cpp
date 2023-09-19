//#include<iostream>
//#include<random>
//#include<vector>
//#include<ctime>
///*간단 정리
//* 프로젝트 3. 랜덤 숫자 맞추기
//1) 컴퓨터가 1~25까지의 수 중 랜덤으로 6개의 수 지정 (중복 x)
//2) 사용자도 1~25까지의 수 중 원하는 숫자 6개 입력 (중복 x)
//3) 두 배열을 비교해서 몇 등인지 출력하기!
//3-1) 한 개도 맞추지 못하면 7등, 1개만 맞추면 6등, 2개 맞추면 5등...
//3-2) 6개를 모두 맞추면 1등
//
//컴퓨터와 사용자용 벡터 만들고 굳이 순서 맞추지 말고 컴퓨터 벡터 안에 사용자 벡터 있는지 숫자 체크
//
//*/
//
////bool tf = (find(user.begin(), user.end(), a) == user.end()); 
////find(user.begin(), user.end(), a) != user.end() 함수로 써보자
//
//using namespace std;
//
//int main() {
//	int a = 0;
//	int count = 0;
//	int have = 0;
//	vector<int> computer ;
//	vector<int> user ;
//	computer.clear();
//	user.clear();
//
//	//a는 25 안의 숫자
//	//true 면 없는겨
//
//	int i = 0;
//	while (i < 6) {
//		
//		int ran = rand();
//		int random = ran % 25 + 1;
//		if (find(computer.begin(), computer.end(), a) != computer.end()) //겹치지 않아
//			continue;
//			
//		else {
//			computer.push_back(random);
//			i++;
//
//		}
//	}
//	
//
//	
//	cout << "숫자는 1-25까지 입력 가능합니다. " << endl;
//	while (count < 6) {
//
//		cout << (count + 1) << "번째 번호를 입력하세요 : ";
//		cin >> a;
//		if (a > 25 || a < 1) {
//			cout << "1~25 사이의 숫자 입력해주세요 . "<<endl;
//			continue;
//		}
//		else if (find(user.begin(), user.end(), a) != user.end())
//		{
//			cout << "이미 있는 번호입니다. "<<endl;
//			continue;
//		}
//		else {
//			user.push_back(a);
//			count++;
//
//			if (find(computer.begin(), computer.end(), a) != computer.end())//여기서 바로 확인
//				have++;
//
//		}
//	}
//
//
//		cout << "--------------------------\n당첨 번호 확인 !\n " ;
//		for (auto k : computer) {
//			cout << k<<" ";
//		}
//		int grade = 7 - have;
//		cout << "\n결과 : 당신의 등수는 " << grade << "등 입니다.";
//			
//
//
//
//	
//
//}