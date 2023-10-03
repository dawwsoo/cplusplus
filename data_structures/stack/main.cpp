//우리가 만드는 스택 클래스를 가져와서 원하는 기능을 작동할 수 있는지 테스트 해본다
#include <iostream>
#include "stack.cpp"

using namespace std;

int main(){
    Stack stack(5);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.push('e');


    stack.print();

return 0;

}
