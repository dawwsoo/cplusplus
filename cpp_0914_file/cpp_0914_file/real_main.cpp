//#include <iostream>
//#include <vector>
//#include "candy.h"
//#include"chocolate.h"
//#include"snack.h"
//
//using namespace std;
//
//
//
//int main() {
//	std::vector<Snack*> snack_basket;
//
//	while (1) {
//		int product;
//		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.( 1: ����, 2: ���ݸ�, 0: ���� ) : ";
//		cin >> product;
//		if (product == 0) break;
//		else if (product == 1) {
//			string taste;
//			cout << "���� �Է��ϼ���. : ";
//			cin >> taste;
//			snack_basket.push_back(new Candy(taste));
//			/*cout << " test ";
//			Candy c(taste);
//			cout << " test end ";*/
//		}
//		else if (product == 2) {
//			string shape;
//			cout << "����� �Է��ϼ���. : ";
//			cin >> shape;
//			snack_basket.push_back(new Chocolate(shape));
//		}
//		else {
//			cout << "0~2 ������ ���ڸ� �Է��ϼ���. \n";
//		}
//
//		cout << endl;
//	}
//
//	cout << endl;
//
//	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�.\n";
//
//	cout << "\n���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!\n";
//
//	for (Snack* snack : snack_basket) {
//		snack->show_info();
//	}
//
//	for (Snack* snack : snack_basket) {
//		delete snack;
//	}
//
//	cout << "���� �ٱ��Ͽ� ��� ������ ������ " << Snack::get_count() << "�� �Դϴ�.\n";
//
//	return 0;
//}