#include "Polynomial.h"
#include "Birthday.h"
#include"Rectangle.h"
#include"Smarthome.h"
#include"Pet.h"
#include"Music.h"


void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main() {
	/*
		Polynomial a, b, c;

		a.read();
		b.read();
		c.add(a, b);
		a.display("A = ");
		b.display("B = ");
		c.display("C = A + B = ");
	*/
	/*
		// 71p. 객체 배열
		Student eei[10];
		strcpy_s(eei[2].name, "Jihoon Woo");
		eei[2].bDay.month = 1;
		eei[2].bDay.date = 6;
		printf("이름은 : %s, %d월 %d일 생입니다. \n", eei[2].name, eei[2].bDay.month, eei[2].bDay.date);
	*/
	// 72p. 참조형 또는 레퍼런스형
	/*int a = 1, b = 2;
	printf("a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("swap 호출 후 , a = %d, b = %d", a, b);
	return 0;
	*/
	/*
	Rectangle r1(4, 5);
	printf("rectangle 1 Area: %lf", r1.getArea());  //printf 사용
	std::cout << "rectangle 1 Area: " << r1.getArea() << std::endl; //iostream의 cout사용
	std::cout << "Is square?" << r1.isSquare() << std::endl;

	SmartHome myHome("우지훈", 23);
	myHome.printStatus();
	*/
	
	Pet myPet("Poppy", 6, "dog");
	cout << "My pet name is" << myPet.getName() << endl;
	cout << "My pet age is" << myPet.getAge() << endl;
	Puppy myPuppy("Kong", 4, "dog" > "Puddle");
	cout << "My pet name is" << myPet.getName() << endl;
	cout << "My pet age is" << myPet.getAge() << endl;
	

	MusicStreamingSevice myService("MyMusic");



}