string �⺻ �ǽ� �Լ� Ȯ��

//string�� char�� �迭
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::string s = "police say two people are suspected of trying to create a shortcut for their construction work.the two have been detained and the case is under further investigation.the 38-year-old man and 55-year-old woman were working near the affected area, the 32nd great wall.";
    std::string str = "two";
    int first = 0;

    std::cout << " 1. ���ڿ��� ���� ���" << std::endl;
    std::cout << s.length() << "\n";
    std::cout << " 2. 100��° ���� ��� " << std::endl;
    std::cout << s.at(99) << std::endl;
    std::cout << s.at(0) << std::endl;
    std::cout << " 3. two ������ ù �ε���" << std::endl;
    std::cout << s.find(str) << std::endl;

    first = s.find(str);

    std::cout << " 4. two ������ �� ��° �ε���" << std::endl;
    std::cout << s.find(str, first + 1) << std::endl;




    ������ �����ϰ� 100��° ���� �����غ���

        std::string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

    std::string::iterator it;
    int num = 0;
    int sum = 0;
    int k = 0;

    for (it = s.begin(); it != s.end(); it++) {

        if (s.find("re", k) == k)
            num++;
        k++;
    }

    std::cout << num;

}
//   ���� �������� �ʰ� �Է¹ޱ�
    //     
    //    std::cout << "ok";
    //    std::cin >> b;
    //    std::getline(std::cin, b);
    //    std::getline(std::cin, b);s
}
