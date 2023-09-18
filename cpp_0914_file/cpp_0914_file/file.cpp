//#include <iostream>
//#include <vector>
//
//#include"candy.h"
//#include"snack.h"
//
//#include "file2.cpp"
//
//
//using namespace std;
//
//
//int main() {
//	std::vector<Snack*> snackBasket;
//
//	//Candy *pc1 = new Candy("자두", "신호등")
//	Candy c1("자두", "신호등");
//	Candy* pc1 = &c1;
//	Candy c2("사과", "츄파");
//
//	Chocolate ch1("사각", "가나");
//	Chocolate ch2("삼각", "킷캣");
//
//	snackBasket.push_back(&c1); // Snack * = Candy *
//	snackBasket.push_back(&c2);
//	snackBasket.push_back(&ch1); // Snack * = Chocolate *
//	snackBasket.push_back(&ch2);
//
//	for (Snack* snack : snackBasket) {
//		cout << snack->getName() << endl;
//		snack->showInfo();
//	}
//
//	//((Candy*)snackBasket[0])->showInfo(); // Candy * = Snack *
//	cout << ((Candy*)snackBasket[0])->flavor << endl;
//	((Candy*)snackBasket[0])->flavor;
//
//	//((Chocolate*)snackBasket[0])->showInfo(); // Chocolate * = Snack *
//	cout << ((Chocolate*)snackBasket[0])->shape << endl;
//	((Chocolate*)snackBasket[0])->shape;
//
//	Chocolate* derivedPtr = dynamic_cast<Chocolate*>(snackBasket[0]);
//	cout << derivedPtr << endl;
//
//	Candy* derivedPtr2 = dynamic_cast<Candy*>(snackBasket[0]);
//	cout << derivedPtr2 << endl;
//	if (derivedPtr2) {
//		cout << derivedPtr2->flavor << endl;
//	}
//
//	return 0;
//
