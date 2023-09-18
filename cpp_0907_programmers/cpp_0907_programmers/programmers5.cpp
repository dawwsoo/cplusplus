없는 숫자 더하기
코딩테스트 연습 - 없는 숫자 더하기 | 프로그래머스 스쿨(programmers.co.kr)


#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> numbers) {
    vector<int> a = { 0,1,2,3,4,5,6,7,8,9 };
    int p = 0;
    for (int t : numbers) {
        for (int i = 0; i < 10; i++) {
            if (t == a[i]) {
                cout << i << endl;
                a[i] = -1;
                p++;
            }
        }

    }
    int sum = 0;

    for (int x : a) {
        sum = sum + x;
    }
    sum = sum + p;
    return sum;
}

int main() {
    vector<int> a = { 5,8,4,0,6,7,9 };
    cout << solution(a);
}

s