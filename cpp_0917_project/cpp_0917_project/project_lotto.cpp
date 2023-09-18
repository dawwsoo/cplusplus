#include<iostream>
#include<ctime>



#include<iostream>
#include<ctime>
#include<vector>
using namespace std;


int main() {
	std::srand(time(NULL));
	int random = std::rand() % 45 + 1;
	int lotto[6] = { 0,0,0,0,0,0 };
	for (int i = 0; i < 6; i++) {
		lotto[i] = random;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			while(lotto[i] == lotto[j]){
			int random = std::rand() % 45 + 1;
			lotto[i] = random;
		}
		}
	}
	//이제 진짜 중복이 안생기는게 맞나? 다시 확인

	for (auto k : lotto) {
		cout << k << " ";
	}
}