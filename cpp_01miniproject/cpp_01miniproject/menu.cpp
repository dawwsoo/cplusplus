
#include<iostream>
#include <stdio.h>
#include <conio.h>
#include<vector>
#include <string>
#include<Windows.h>
#include<iomanip>
using namespace std;

void gotoxy(int x, int y)
{
    COORD Pos;        //x, y�� ������ �ִ� ����ü
    Pos.X =  x;  //x�� �����̴� ����
    Pos.Y = 23+2*y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void show(vector<string> k) {
    cout << setw(50) << "|  MENU  |"<<endl<<endl;
    for (auto i : k) {
        cout << setw(50) << i <<endl<<endl;
    }
}

// �����¿� ����� ����
#define UP 72
#define DOWN 80
#define ENTER 13
int main() {
    vector<string> menu = { "1.    USER","2.   START","3. RANKING" };

    cout << endl << endl << endl << endl;
    cout <<setw(100)  << "#      #        #         #     #       #######      #           #        #         #     #" << endl;
    cout << setw(100) << "#      #       # #        ##    #      #             ##         ##       # #        ##    #" << endl;
    cout << setw(100) << "#      #      #   #       # #   #     #              # #       # #      #   #       # #   #" << endl;
    cout << setw(100) << "########     #######      #  #  #     #    ######    #  #     #  #     #######      #  #  #" << endl;
    cout << setw(100) << "#      #    #       #     #   # #      #        #    #   #   #   #    #       #     #   # #" << endl;
    cout << setw(100) << "#      #   #         #    #    ##       #      #     #    # #    #   #         #    #    ##" << endl;
    cout << setw(100) << "#      #  #           #   #     #        #####       #     #     #  #           #   #     #" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    show(menu);
  
    int menu_num= 0;
    int count = 0;
    string arrow= " /\\  \n/__\\ \n ||  \n ||  \n";
    int c;
    int c2;

    for (;;) {
        gotoxy(20,count);
        if (1) {        //Ű���� �Է� Ȯ�� (true / false)
            c = _getch();      // ����Ű �Է½� 224 00�� ������ �Ǳ⿡ �տ� �ִ� �� 224�� ����
            c2 = c;
                if (c==224)
                    c = _getch();  // ���� �Է°��� �Ǻ��Ͽ� �����¿� ���
           
                if (count>=0&&count<=2){
                    switch (c) {
                    case 72:
                        if (count > 0) 
                            count--;
                        continue;
                    case 80:
                        if (count < 2)
                            count++;
                        continue;
                    case ENTER:
                        cout << "enter" << endl;
                        menu_num = count;
                        break;
                    }
                }
         }
    }

    cout << menu_num;

    system("cls");

}


