�˾���(2)
�Ӿ��̴� �¾ �� 11���� �� ��ī�� ������ �ֽ��ϴ�.��ī�� ���� "aya", "ye", "woo", "ma" �� ���� ������ �� ���� ������ �����ؼ� ���� �� �ִ� �����ۿ� ���� ���ϰ� �����ؼ� ���� ������ �ϴ� ���� ������մϴ�.���ڿ� �迭 babbling�� �Ű������� �־��� ��, �Ӿ����� ��ī�� ������ �� �ִ� �ܾ��� ������ return�ϵ��� solution �Լ��� �ϼ����ּ���.
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
                //#ù �ε����� babycan �� ������ ���
                //1. ��Ʈ�� �ݺ� �� �ֱ� ���� �ȵ�
                if (x.find(babycan[i]) == 0)
                    break;                    //2. �� ������ ��ŭ ���� �� ����� 0�̶�� ������ �� �ִ� �����̴پ�!>> so  sum++ (sum�� return �� �� ���̴�.)
                if (x.size() == 0) {
                    sum++;
                    break;
                }    //babycan�� ù ��Һ��� �ٽ� �˻��� �� �ֵ��� i=0 �ʱ�ȭ ���ֱ�
                i = -1; // �������� �� �ڿ� �ٷ� ����Ǳ� ������ -1�� �ؾ��Ѵ�. 
            }
        }
    }
    return sum;
}

