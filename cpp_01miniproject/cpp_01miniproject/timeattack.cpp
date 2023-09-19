/* 끝말잇기 게임
계속 확장시켜야 하니까 벡터를 써야겠다.
한글로 만들어 볼까..
마지막 글자와 첫번째 글자가 일치하면 다시 시도하게 하기
타이머는 계속 돌아가도록
등록된 단어면 안됨

끝날때 몇개까지 이었는지 확인

한글은 한글자당 vector 사이즈 2
*/

//영어 버전은 아스키 코드 이용해보고싶다.



#include<iostream>
#include<vector>
#include<string>
#include<time.h>

using namespace std;


int count(string k) {
	int i = k.size();
		return i;
}
//한글 단어 몇 자 짜리 인지 >> string k 의 인덱스 맨 마지막 글자를 확인하기 위해서
//한글은 인덱스로 사용할 수가 없어서...........실패

int main() {
	vector<string> word;
	word.clear();




	string user;
	string new_word;
	user.clear();
	new_word.clear();
	int value = 0;
	cout << "시작 단어를 입력하세요 " << endl;
	cin >> user;
	cout << endl;
	word.push_back(user);

	//알파벳 아스키코드 65-90 대문자_ 97-122 소문자
	int no;

	while (1) {
		clock_t time = clock(); //시간재기 오답일 경우도 계속 셈
		for (auto k : word) {
			cout << k << "->";
		}
		cout << endl;
		cout << "다음 단어를 입력하세요 . " << endl;
		cin >> new_word;

		int k = user.size();

		for (auto k : new_word) {
			if ((((int)k > 64) && ((int)k < 91)) || (((int)k > 96) && ((int)k < 123)))
				no = 1;
			else {
				no = 0; //알파벳 아닌 게 하나라도 있으면 나와야지 no=0이 산다.
				break;
			}
		} //알파벳이 아닌 이상한 것이 들어갔다면 다시 입력하게 할 셈

		if (user[k - 1] != new_word[0]) {
			cout << "다시 입력하세요 ! " << endl << endl;
			continue;
		}//끝말잇기가 아닐 경우

		else if (no == 0) {
			cout << "영어만 입력받습니다. 다시 입력하세요 ! " << endl << endl;
			continue;
		}//영어가 아닌 문자를 사용할 경우

		else if (find(word.begin(), word.end(), new_word) != word.end())//중복 값이 있을 경우
		{
			cout << "이미 나온 단어입니다. 다시 입력하세요 ! " << endl << endl;
			continue;
		}

		else {
			float timecheck = ((float)(clock() - time) / CLOCKS_PER_SEC);
			if (timecheck > 30) {
				cout << "T!I!M!E! O!V!E!R!" << endl;
				break;
			}
			word.push_back(new_word);
			user = new_word;
		} //제대로 입력했다면 그 단어는 단어 모음집에 올려주고 비교할 단어로 바꿔주기

	}
	cout << endl << "**************************" << endl;
	cout << endl << "이어 말한 총 단어 수 " << word.size() << endl << "THANK YOU" << endl;

}