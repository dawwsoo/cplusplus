#include<vector>
#include<iostream>
#include<array>



/*���̵��
�����迭�� ����Ѵ�.
1���� �ֵ��� ��*/

using namespace std;

int main() {

	int i = 0;
	cout << "Ȧ���� �Է��ϼ���. : ";
	cin >> i;//���� �迭�� ����ž�

	int** arr2 = new int* [i];
	for (int k = 0; k < i; k++) {
		arr2[k] = new int[i];
	}

	for (int a = 0; a < i; a++) {
		for (int b = 0; b < i; b++) {
			arr2[a][b] = 0;
		}
	} //�迭 �ʱ�ȭ

	int arr = i - 1;

	int x = arr;
	int y = arr / 2;

	int count = 1;
	arr2[x][y] = count;
	count++;
	while (1) {

		x++;
		y++;

		if (x < i && y < i && (arr2[x][y] == 0)) {
			arr2[x][y] = count;
			count++;
			continue;
		}
		else if (x == arr && y == arr) {
			x = 0;
			y = 0;
			continue;
		}
		else if (arr2[x][y] != 0)
		{
			x = x - 2;
			y = y - 1;
		}
		else if (x > arr)
			x - i;
		else if (y > arr)
			y - i;
		arr2[x][y] = count;
		count++;


		if (count > i * i)
			break;
	}



for (int k = arr; k >=0; k--) {
	for (int j =0; j<i; j++) {
		cout << arr2[k][j] <<" ";
	}
	cout << endl;
}


for (int k = 0; k < i; k++) {
	delete[] arr2[k];
}
delete[] arr2;
		
	


}

//
//
//
//
//i-1 �� ����Ұž�
//cin >> i;
//
//���� ���� �ϼ���Ű��.
//ù x,y
//
//k(x, y) >> k + 1 (x + 1, y + 1)
//
//
//
//if (x, y) != 0 //���� ������ x��ĭ ������
//x--;
//
//

