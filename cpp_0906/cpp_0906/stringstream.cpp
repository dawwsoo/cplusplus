
다양한 사용 ? 살펴봐야 됨 기억 하나도 안나
//string은 char의 배열
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<sstream>



//for_each문으로 하면 좀 더 편한 것 같다(제케님 참조)
//바로 while-for문을 검사할 수 없다면 이렇게 함수를 만들어보자.
int trueorfalse(std::string a) {

    std::vector<int> tf_f;

    tf_f.clear();
    for (int i = 0; i < a.size(); i++) {
        /*if (!isdigit(a[i])) 만으로도 true false가 나오는 것이다. 그렇지만 true false 와 완전히 같지는 않다.*/
        if (isdigit(a[i]) == 0) {
            tf_f.insert(tf_f.begin(), 1);

        }

        //clear를 해줘야 초기값이 빈 공간이 되는 것 잊지 말자
    }

    if (tf_f.size() == 0)// 공간이 생겼다면 == 값이 들어갔다면
        return 1;//성공했을경우
    if (tf_f.size() != 0)
        return 0; //실패했을경우

}



//stream string 이용하기
int trueorfalse_stream(std::string a) {

    std::stringstream stream(a);
    std::vector<int> tf_f;
    int thisone;  //string으로 받아주면 숫자까지 모두 string으로 인식해서 int로 바꿔서 사이즈 비교할 수 밖에 없었다.
    std::string  this2;
    stream.str(a);

    this2.clear();
    stream >> thisone;
    this2 = std::to_string(thisone); //to_string 사용할때 앞에 std::

    if (this2.size() != a.size())
        return 0;
    if (this2.size() == a.size())
        return 1;

}

int main() {
    std::string user_A;
    std::string user_B;
    std::stringstream stream;


    std::cout << "첫 번째 숫자를 입력하세요(문자 포함 x) \n";
    std::cin >> user_A;

    while (trueorfalse_stream(user_A) == 0) {

        std::cout << "NO" << std::endl << std::endl;
        std::cout << "첫 번째 숫자를 입력하세요(문자 포함 x) \n";
        std::cin >> user_A;
    }

    std::cout << "OK\n\n\n\n";

    std::cout << "두 번째 숫자를 입력하세요(문자 포함 x) \n";
    std::cin >> user_B;

    while (trueorfalse(user_B) == 0) {

        std::cout << "NO" << std::endl << std::endl;
        std::cout << "두 번째 숫자를 입력하세요(문자 포함 x) \n";
        std::cin >> user_B;
    }


    std::cout << "OK\n\n\n\n";

    std::cout << "두 숫자의 합" << stoi(user_A) + stoi(user_B) << std::endl;
    std::cout << "두 숫자 이어 붙여 출력" << user_A.append(user_B) << std::endl;
    //append하는 순간 그것은 user_A가 된다.


    //std::cout << "ok";
    //std::cin >> b;
    //std::getline(std::cin, b);
    //std::getline(std::cin, b);


//#3

    //std::tolower(s[1]) tolower 사용법 다시 특이해,

    std::string s = "Codingon"; std::cout << "1. : " << s << std::endl;
    s[0] = std::tolower(s[0]);

    std::cout << "2. : " << s << std::endl;
    std::cout << "3. : " << s.substr(2, 4) << std::endl;;
    s.insert(1, 4, 'o');
    s.erase(6, 4);
    std::cout << "4. : " << s << std::endl;;
    std::cout << "5. : " << s.erase(1, 5) << std::endl;;


}
