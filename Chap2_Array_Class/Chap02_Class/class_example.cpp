#include "sports_car.h"


int main()
{
	Car youCar(100, 4,"yourcar");
	youCar.display();
	youCar.whereAmI();
	youCar.gear = 5;
	youCar.display();
	youCar.changeGear(3);
	youCar.display();

	SportsCar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();
	myCar.display();
	return 0;

}