#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartHome {
private:
	string owner; //������ �̸�
	int temperature;
	int humidity;
	bool security;//���� �ý��� ����

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
		cout << "������:" << owner << endl;
		cout << "�µ�:" << temperature << "��" << endl;
	}

};
