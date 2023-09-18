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
//		cout << "과자 바구니에 추가할 간식을 고르시오.( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
//		cin >> product;
//		if (product == 0) break;
//		else if (product == 1) {
//			string taste;
//			cout << "맛을 입력하세요. : ";
//			cin >> taste;
//			snack_basket.push_back(new Candy(taste));
//			/*cout << " test ";
//			Candy c(taste);
//			cout << " test end ";*/
//		}
//		else if (product == 2) {
//			string shape;
//			cout << "모양을 입력하세요. : ";
//			cin >> shape;
//			snack_basket.push_back(new Chocolate(shape));
//		}
//		else {
//			cout << "0~2 사이의 숫자를 입력하세요. \n";
//		}
//
//		cout << endl;
//	}
//
//	cout << endl;
//
//	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다.\n";
//
//	cout << "\n과자 바구니에 담긴 간식 확인하기!\n";
//
//	for (Snack* snack : snack_basket) {
//		snack->show_info();
//	}
//
//	for (Snack* snack : snack_basket) {
//		delete snack;
//	}
//
//	cout << "과자 바구니에 담긴 간식의 개수는 " << Snack::get_count() << "개 입니다.\n";
//
//	return 0;
//}