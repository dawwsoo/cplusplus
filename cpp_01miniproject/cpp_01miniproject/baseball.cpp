#include<vector>
#include<string>
#include <iostream>
#include<random>

/*야구 게임 아이디어

int vector 2개 만들고 비교하면 되지 않나?
100으로나누고 10으로 나누는 아이디어 쓰고 싶었지만 사용할 필요가 없어보임

*/
using namespace std;


/*int re_ifelse(vector<int> vec, int a, int b) {
	vec.push_back(a);
	if (find(vec.begin(), vec.end(), b) != vec.end()) {
		cout << "중복된 숫자가 있습니다";
		return 0;
	}
	else
		return 1;


}
//else {
//	if (re_ifelse(user, c, b) == 0)
//		continue;
//	else {
//		if (re_ifelse(user, b, a) == 0)
//			continue;
//	}
//}
/*else {
	user.push_back(c);
	if (find(user.begin(), user.end(), b) != user.end())
	{
		cout << "중복된 숫자가 있습니다";
		continue;
	}
	else {
		user.push_back(b);

		if (find(user.begin(), user.end(), a) != user.end()) {
			cout << "중복된 숫자가 있습니다";
			continue;
		}
		else
			user.push_back(a);
	}
}
첨언 굳이 넣고 비교하지 않아도 된다 우와. 그냥 숫자끼리 먼저 비교하고 넣기*/


int end(int k) {
	if ((k < 0) || (k > 9))
		return 1;
	return 0;
}



int main()
{
	vector<int> user;
	vector<int>comp;

	comp.clear();
	user.clear();

	int i = 0;
	while (i < 4) {
		srand(time(nullptr));
		int ran = rand();
		int random = ran % 10;
		if (find(comp.begin(), comp.end(), random) != comp.end()) //겹치지 않아
			continue;

		else {
			comp.push_back(random);
			i++;

		}
	}
	//cout << "computer 숫자 확인용 : ";

	/*for (auto k : comp) {
		cout  << k << " ";
	}
	cout << endl;*/
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int ball = 0;
	int strike = 0;
	int count = 0;

	while (strike != 4) {
		strike = 0;
		ball = 0;
		cout << endl<<"0~9 사이의 숫자 4개를 입력 하시오. (이외의 숫자 : 종료) " << endl;
		cin >> a >> b >> c>>d;
		if (end(a) || end(b) || end(c)||end(d)) {
			cout << "게임을 종료하였습니다.";
			break;
		} //1~9사이의 숫자가 아닐 경우 종료시키기
		else if (a == b || b == c || c == a||a==d||b==d||c==d)
		{
			cout << "중복된 수가 있습니다. " << endl;
			continue;
		}//중복 검사하기 
		else
		{
			user.push_back(a);
			user.push_back(b);
			user.push_back(c);
			user.push_back(d);

			
			count++;
		}

		for (i = 0; i < 4; i++) {
			if (user[i] == comp[i])
				strike++;
			else {
				for (int k : comp) {
					if (user[i] == k)
						ball++;
				}
			}
			
		}

		cout  << "Strike : " << strike << " Ball : " << ball<<endl;
		//중요! user의 값을 계속 새로 받으니 초기화 필수
		user.clear();
	}
	
	if (strike == 4) {
		cout << count << "번 만에 맞췄습니다.";
	}
}