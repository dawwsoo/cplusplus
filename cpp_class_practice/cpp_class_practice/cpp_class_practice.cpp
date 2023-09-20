

#include <iostream>
using namespace std;

//tv 속성을 저장할 거임.

//struct는 private이 없으면 기본적으로 public이 된다.
struct TV {
private://캡슐화
	int volume;
	bool powerOn;
	int channel;
public:
	void on() {
		powerOn = true;
		cout << "전원을 켰습니다";
	}
	
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			channel = cnl;
		}
	}
	
	
	void setVolume(int vol) {//이 안에서 함수 만들 수 있다,
		if (vol >= 0 && vol <= 100) {
			volume = vol;
		}
	}
};

int main()
{
	TV lg;
	/*lg.powerOn = true;
	lg.channel = 10;
	lg.volume = 50;*/
	//volume 이 최대치 100을 넘는 걸 방지하자 다시 struct로 가서 함수 만들어
	lg.setVolume(50);
	//어어 근데 이제 그럼 .volume을 쓰지 말아야지 _ 접근 제어자 사용 private/protected/public
}