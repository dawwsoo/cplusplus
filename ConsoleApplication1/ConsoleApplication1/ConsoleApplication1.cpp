// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <Windows.h>
#include <ctime>
#include <vector>
using namespace std;
std::string getCurrentTime() {
    std::time_t now = std::time(nullptr);
    struct tm timeInfo;
    localtime_s(&timeInfo, &now);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d%H%M%S", &timeInfo);
    return buffer;
}

const std::string nowTime = getCurrentTime();

int main()
{
    /*string ss = " 너랑 친구가 되고 싶어 !\n 잘부탁해 안녕 \n ^^&&";
    string s;
    std::stringstream a(ss);
    string friend_ID = "";
    string request_msg = "";*/
    std::vector<string> id_msg = { "","","" };
    /*id_msg.clear();
    while (ss >> s)
        id_msg.push_back(s);
    id_msg[0] = friend_ID;
    id_msg.erase(id_msg.begin());
    for (auto line : id_msg)
        request_msg = request_msg + line + " ";*/
    cout << id_msg.size();

  
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
