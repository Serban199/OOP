#include "Circuit.h"
#include <iostream>
#include "Volvo.h"
#include "Seat.h"
#include "BMW.h"
#include "Fiat.h"
#include "RangeRover.h"
#include "Weather.h"
#include <vector>
#include <algorithm>
#include <string>
#include "Car.h"
using namespace std;
void Circuit :: SetLength(int n)
{
	length = n;
}
void Circuit :: SetWeather(Weather c)
{
	weather = c;
}
void Circuit ::AddCar(Car* car1)
{
	
	switch{
		case Sunny:
			car1->SunnyCond();
			break;
		case Snow:
			car1->SnowyCond();
			break;
		case Rain:
			car1->RainnyCond();
			break;
	}
	cars[cars_number] = car1;
	cars_number++;

}
void Circuit::Race(){
	for (int i = 0; i < cars_number; i++)
		cout << length / cars[i]->speed;
}
