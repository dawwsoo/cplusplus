옹알이(2)
머쓱이는 태어난 지 11개월 된 조카를 돌보고 있습니다.조카는 아직 "aya", "ye", "woo", "ma" 네 가지 발음과 네 가지 발음을 조합해서 만들 수 있는 발음밖에 하지 못하고 연속해서 같은 발음을 하는 것을 어려워합니다.문자열 배열 babbling이 매개변수로 주어질 때, 머쓱이의 조카가 발음할 수 있는 단어의 개수를 return하도록 solution 함수를 완성해주세요.
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> baby) {
    vector<string> babycan = { "aya","ye","woo","ma" };
    string a;
    vector<string> baby_2;
    baby_2 = baby;
    int sum = 0;

    for (string x : baby) {
        for (int i = 0; i < 4; i++) {
            if (x.find(babycan[i]) == 0) {
                x.erase(0, babycan[i].size());
                //#첫 인덱스가 babycan 의 발음일 경우
                //1. 스트링 반복 시 애기 발음 안됨
                if (x.find(babycan[i]) == 0)
                    break;                    //2. 그 사이즈 만큼 지운 후 사이즈가 0이라면 발음할 수 있는 발음이다악!>> so  sum++ (sum을 return 해 줄 것이다.)
                if (x.size() == 0) {
                    sum++;
                    break;
                }    //babycan의 첫 요소부터 다시 검사할 수 있도록 i=0 초기화 해주기
                i = -1; // 증감문이 이 뒤에 바로 실행되기 때문에 -1이 해야한다. 
            }
        }
    }
    return sum;
}

