삼각형의 완성조건(1)
코딩테스트 연습 - 삼각형의 완성조건(1) | 프로그래머스 스쿨(programmers.co.kr)
#include <string>
#include <vector>
#include<iostream>

using namespace std;

int max(int x, int y) {
    return (x > y ? x : y);
}
int min(int x, int y) {
    return (x < y ? x : y);
}

int solution(vector<int> sides) {
    int answer = 0;
    int a = sides[0];
    int b = sides[1];
    int c = sides[2];

    if (max(c, max(a, b)) > min(c, max(a, b)) + min(a, b))
        return 2;
    else
        return 1;



}

int main() {
    vector<int> sides = { 1,4,5 };
    cout << solution(sides);
}
