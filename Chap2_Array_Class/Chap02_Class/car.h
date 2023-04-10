#pragma once
#include <cstdio>
#include <cstring>

class Car {
private: //���� Ŭ���� ���ο����� ���ٰ���
protected: //�ڽ� Ŭ���������� ���� ����
	

public:  //�ܺ� ���� ����
	int gear;
	int speed; //�ӷ�
	char name[40]; //�̸�

	Car(): speed(0), gear(0), name(""){} //������(Constructor)
	~Car() {}                            //�Ҹ���
	Car(int s, char* n, const char g)
		: speed(s), gear(g) {
		strcpy_s(name, n); //n�� name �� copy

	}
	void changeGear(int g ) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s]: ���=%d��, �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("��ü �ּ� = %p\n", this);
	}
};
