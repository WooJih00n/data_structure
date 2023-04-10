#pragma once
#include <cstdio>
#include <cstring>

class Car {
private: //현재 클래스 내부에서만 접근가능
protected: //자식 클래스에서는 변경 가능
	

public:  //외부 접근 가능
	int gear;
	int speed; //속력
	char name[40]; //이름

	Car(): speed(0), gear(0), name(""){} //생성자(Constructor)
	~Car() {}                            //소멸자
	Car(int s, char* n, const char g)
		: speed(s), gear(g) {
		strcpy_s(name, n); //n을 name 에 copy

	}
	void changeGear(int g ) {
		gear = g;
	}
	void speedUp() {
		speed += 5;
	}
	void display() {
		printf("[%s]: 기어=%d단, 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %p\n", this);
	}
};
