#include<iostream>
#include<vector>
#include<iomanip>// 칸 수 맞춰놓기 (줄맞추기)

int main() {


	
	int x = 0;

	int y = 0;
	std::cout << "x를 입력하세요. : \n";
	std::cin >> x;
	std::cout << "y를 입력하세요. : \n";
	std::cin >> y;

	while (x <= 0 || y <= 0) {
		std::cout << "x와 y 모두 양수를 입력해주세요.";
		std::cout << "x를 입력하세요. : \n";
		std::cin >> x;
		std::cout << "y를 입력하세요. : \n";
		std::cin >> y;
	}

	std::vector<std::vector<int>> arr2;
	arr2.assign(x, std::vector<int>(y));
	int k = 0;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			k++;
			arr2[i][j] = k;
			
			
		}

	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			std::cout << std::setw(3)<<arr2[i][j] << " ";
		}
		std::cout << "\n";

	}

벡터의 다양한 함수 이용하기

	std::vector<int> myvector = { 10,20,30,20,503,30,14,14,14,24,20};  //선언한거임
	int size = myvector.size();


	int count = 0;
	for (int i = 0; i < myvector.size(); i++) {
		//size는 유동적으로 변해서 정말 조심해야됨 오버되어서 숫자 세 개가 동일할때는 지워지지 않는다.

		for (int j = i + 1; j < myvector.size(); j++) {
		/*	count++;*/
			/*std::cout << count << "\n";*/
			if (myvector.at(i) == myvector.at(j)) {
				myvector.erase(myvector.begin() + i);
				myvector.insert(myvector.begin(), 0);
				count++;
			}
			
		}
	}

	myvector.erase(myvector.begin(),myvector.begin() + count);


	std::cout << "myvector = ";
	std::cout << "{"<<" ";
		for (int i = 0; i < myvector.size(); i++) {
			std::cout << myvector[i]<<" ";
		}
		std::cout << "}";
}


erase 어디부터 어디까지 혹은 index하나만 삭제 가능

/*myvector.erase(myvector.begin(), myvector.begin()+size);*/

int newsize = sizeof(myvector) / sizeof(myvector.at(0));


