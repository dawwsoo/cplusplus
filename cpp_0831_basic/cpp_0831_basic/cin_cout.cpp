//�����(cin/cout)
#include <iostream>

int main()
{
    std::cout << "�̸��� �Է��ϼ���. : ";
    std::string name;
    std::cin >> name;
    std::cout << "���̸� �Է��ϼ���. : ";
    int age = 0;
    std::cin >> age;
    std::cout << "�ȳ��ϼ���! " << name << "�� (" << age << "��)";

}


#include <iostream>
int main() {
    int num = 0;
    std::cout << "���ڸ� �Է��ϼ��� : ";
    std::cin >> num;

    num % 5 == 0 ? std::cout << num << "��(��) 5�� ����Դϴ�" : std::cout << num << "��(��) 5�� ����� �ƴϳ׿�......";
}