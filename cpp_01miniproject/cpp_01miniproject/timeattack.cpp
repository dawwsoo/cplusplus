/* �����ձ� ����
��� Ȯ����Ѿ� �ϴϱ� ���͸� ��߰ڴ�.
�ѱ۷� ����� ����..
������ ���ڿ� ù��° ���ڰ� ��ġ�ϸ� �ٽ� �õ��ϰ� �ϱ�
Ÿ�̸Ӵ� ��� ���ư�����
��ϵ� �ܾ�� �ȵ�

������ ����� �̾����� Ȯ��

�ѱ��� �ѱ��ڴ� vector ������ 2
*/

//���� ������ �ƽ�Ű �ڵ� �̿��غ���ʹ�.



#include<iostream>
#include<vector>
#include<string>
#include<time.h>

using namespace std;


int count(string k) {
	int i = k.size();
		return i;
}
//�ѱ� �ܾ� �� �� ¥�� ���� >> string k �� �ε��� �� ������ ���ڸ� Ȯ���ϱ� ���ؼ�
//�ѱ��� �ε����� ����� ���� ���...........����

int main() {
	vector<string> word;
	word.clear();




	string user;
	string new_word;
	user.clear();
	new_word.clear();
	int value = 0;
	cout << "���� �ܾ �Է��ϼ��� " << endl;
	cin >> user;
	cout << endl;
	word.push_back(user);

	//���ĺ� �ƽ�Ű�ڵ� 65-90 �빮��_ 97-122 �ҹ���
	int no;

	while (1) {
		clock_t time = clock(); //�ð���� ������ ��쵵 ��� ��
		for (auto k : word) {
			cout << k << "->";
		}
		cout << endl;
		cout << "���� �ܾ �Է��ϼ��� . " << endl;
		cin >> new_word;

		int k = user.size();

		for (auto k : new_word) {
			if ((((int)k > 64) && ((int)k < 91)) || (((int)k > 96) && ((int)k < 123)))
				no = 1;
			else {
				no = 0; //���ĺ� �ƴ� �� �ϳ��� ������ ���;��� no=0�� ���.
				break;
			}
		} //���ĺ��� �ƴ� �̻��� ���� ���ٸ� �ٽ� �Է��ϰ� �� ��

		if (user[k - 1] != new_word[0]) {
			cout << "�ٽ� �Է��ϼ��� ! " << endl << endl;
			continue;
		}//�����ձⰡ �ƴ� ���

		else if (no == 0) {
			cout << "��� �Է¹޽��ϴ�. �ٽ� �Է��ϼ��� ! " << endl << endl;
			continue;
		}//��� �ƴ� ���ڸ� ����� ���

		else if (find(word.begin(), word.end(), new_word) != word.end())//�ߺ� ���� ���� ���
		{
			cout << "�̹� ���� �ܾ��Դϴ�. �ٽ� �Է��ϼ��� ! " << endl << endl;
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
		} //����� �Է��ߴٸ� �� �ܾ�� �ܾ� �������� �÷��ְ� ���� �ܾ�� �ٲ��ֱ�

	}
	cout << endl << "**************************" << endl;
	cout << endl << "�̾� ���� �� �ܾ� �� " << word.size() << endl << "THANK YOU" << endl;

}