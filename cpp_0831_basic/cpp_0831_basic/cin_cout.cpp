//입출력(cin/cout)
#include <iostream>

int main()
{
    std::cout << "이름을 입력하세요. : ";
    std::string name;
    std::cin >> name;
    std::cout << "나이를 입력하세요. : ";
    int age = 0;
    std::cin >> age;
    std::cout << "안녕하세요! " << name << "님 (" << age << "세)";

}


#include <iostream>
int main() {
    int num = 0;
    std::cout << "숫자를 입력하세요 : ";
    std::cin >> num;

    num % 5 == 0 ? std::cout << num << "은(는) 5의 배수입니다" : std::cout << num << "은(는) 5의 배수가 아니네요......";
}