//string은 char의 배열
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//프로그래머스 중복 단어 확인하기(벡터 이용)

using namespace std;
int solution(string mystring, string pat) {
    int answer = 0;
    int c = 0;
    vector<int> b;
    for (int i = 0; i < mystring.size(); i++) {
        if (mystring.find(pat, c) == c) {
            b.insert(b.begin(), mystring.find(pat, i));

        }
        c++;
    }
    answer = b.size();
    return answer;
}

int solution(std::string mystring, std::string pat) {
    int answer = 0;
    std::string::iterator it;
    for (it = mystring.begin(); it != mystring.end(); it++) {
        if (mystring.find(pat) == 0)
            answer++;

    }
    return answer;
