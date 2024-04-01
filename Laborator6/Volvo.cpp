#include "Volvo.h"
using  namespace std;
Volvo::Volvo()
{
	name = "Volvo";
}

void Volvo::SunnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 8;
	avgspeed = 30;

}

void Volvo::RainnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 9;
	avgspeed = 20;
	
}
void Volvo::SnowyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 12;
	avgspeed = 100;
	
}