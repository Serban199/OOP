#include "BMW.h"
using  namespace std;
BMW::BMW()
{
	name = "BMW";
}

void BMW:: SunnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 8;
	avgspeed = 30;
	race1 = fuelcapacity * avgspeed;
}

void BMW:: RainnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 9;
	avgspeed = 20;
	race1 = fuelcapacity * avgspeed;

}
void BMW:: SnowyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 12;
	avgspeed = 100;
	race1 = fuelcapacity * avgspeed;
}