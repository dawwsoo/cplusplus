���ڸ���Ʈ�� ���ڿ��� �����ϱ�
#include <string>
#include <vector>
#include<iostream>

using namespace std;


int solution(int n)
{
    int answer = 0;
    string real = to_string(n);
    int sum = 0;

    for (auto i : real) {
        sum = sum + (i - '0'); //char> ���� �ٲٴ� ���
    }
    return sum;
}
int main() {

    solution(2413);
}


string solution(vector<string> arr) {
    string answer = " ";
    for (auto i : arr) {
        answer.insert(answer.begin(), i);
    }

    return answer;
}
int main() {
    solution({ "a","p","u" });

}
