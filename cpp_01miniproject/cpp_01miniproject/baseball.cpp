#include<vector>
#include<string>
#include <iostream>
#include<random>

/*�߱� ���� ���̵��

int vector 2�� ����� ���ϸ� ���� �ʳ�?
100���γ����� 10���� ������ ���̵�� ���� �;����� ����� �ʿ䰡 �����

*/
using namespace std;


/*int re_ifelse(vector<int> vec, int a, int b) {
	vec.push_back(a);
	if (find(vec.begin(), vec.end(), b) != vec.end()) {
		cout << "�ߺ��� ���ڰ� �ֽ��ϴ�";
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
		cout << "�ߺ��� ���ڰ� �ֽ��ϴ�";
		continue;
	}
	else {
		user.push_back(b);

		if (find(user.begin(), user.end(), a) != user.end()) {
			cout << "�ߺ��� ���ڰ� �ֽ��ϴ�";
			continue;
		}
		else
			user.push_back(a);
	}
}
÷�� ���� �ְ� ������ �ʾƵ� �ȴ� ���. �׳� ���ڳ��� ���� ���ϰ� �ֱ�*/


int end(int k) {
	if ((k < 1) || (k > 9))
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
	while (i < 3) {
		srand(time(nullptr));
		int ran = rand();
		int random = ran % 9 + 1;
		if (find(comp.begin(), comp.end(), random) != comp.end()) //��ġ�� �ʾ�
			continue;

		else {
			comp.push_back(random);
			i++;

		}
	}
	cout << "computer ���� Ȯ�ο� : ";
	for (auto k : comp) {
		cout  << k << " ";
	}
	cout << endl;
	int a = 0;
	int b = 0;
	int c = 0;
	int ball = 0;
	int strike = 0;
	int count = 0;

	while (strike != 3) {
		strike = 0;
		ball = 0;
		cout << endl<<"1~9 ������ ���� 3���� �Է� �Ͻÿ�. (�̿��� ���� : ����) " << endl;
		cin >> a >> b >> c;
		if (end(a) || end(b) || end(c)) {
			cout << "������ �����Ͽ����ϴ�.";
			break;
		} //1~9������ ���ڰ� �ƴ� ��� �����Ű��
		else if (a == b || b == c || c == a)
		{
			cout << "�ߺ��� ���� �ֽ��ϴ�. " << endl;
			continue;
		}//�ߺ� �˻��ϱ� 
		else
		{
			user.push_back(a);
			user.push_back(b);
			user.push_back(c);
			count++;
		}

		for (i = 0; i < 3; i++) {
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
		//�߿�! user�� ���� ��� ���� ������ �ʱ�ȭ �ʼ�
		user.clear();
	}
	
	if (strike == 3) {
		cout << count << "�� ���� ������ϴ�.";
	}
}