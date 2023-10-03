// 스택 클래스를 구현한 다음 각 함수를 정의할 것이다
#include<iostream>
using namespace std;

class Stack
{
    int top;
    int MaxSize;
    char* stack;

    public:

    Stack(int size);
    bool isFull();
    bool isEmpty();
    //스택은 정해진 용량이 있는데 가득 차있는지 아닌지 판별하는 함수

    //스택의 주요기능인 push와 pop 함수
    void push(char element);
    char pop();

    //스택 자료를 전부 출력하는 프린트 함수
    void print();

};

Stack::Stack(int size){
    MaxSize= size;
    stack = new char[MaxSize];
    top = -1;

}

bool Stack::isFull(){
    if(top ==MaxSize-1)
        return true;
    else
        return false;
}

bool Stack::isEmpty(){
    if(top==-1)
    return true;
    else
    return false;
}

void Stack::push(char element){
    if(isFull()==true){
        cout<<"Full!"<<endl;
    }
    else
    stack[++top]= element;
} //top값을 먼저 증가시키는 이유는 우리가 -1로 정의해서

char Stack::pop(){
    if(isEmpty()==true)
    cout<<"Empty!"<<endl;
    else
    return stack[top--];
}//top인덱스를 내보내고 하나 줄여주기

void Stack::print(){
    for (int i =0; i<top+1; i++)
    { 
        cout<<"stack에 저장된 데이터: "<<stack[i]<<endl;
    }
}