#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner; //집주인 이름
	int temperature;
	int humidity;
	bool security;//보안 시스템 상태

public:
	SmartHome(string owner, int temperature, int humidity, bool security) {
		this->owner = owner;
		this->temperature = temperature;
		this->security = security;
	}

	void setTemperature(int temperature) {
		this->temperature = temperature;
	}
	int getTemperature() {
		return this->temperature;
	}
	void printStatus() {
		cout << "집주인:" << owner << endl;
		cout << "온도:" << temperature << "도" << endl;
	}

};
