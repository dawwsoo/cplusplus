
#pragma once
#include "file2.cpp"

class Snack {
protected:
	int price;
	string name;
	string maker;
public:
	Snack() { }
	string getName() {
		return name;
	}
	virtual void showInfo() {
		cout << name << " �����Դϴ�~" << endl;
	}
};