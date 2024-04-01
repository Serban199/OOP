#include "RangeRover.h"
using  namespace std;
RangeRover::RangeRover()
{
	name = "RangeRover";
}

void RangeRover::SunnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 8;
	avgspeed = 30;
	race1 = fuelcapacity * avgspeed;
}

void RangeRover::RainnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 9;
	avgspeed = 20;
	race1 = fuelcapacity * avgspeed;
}
void RangeRover::SnowyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 12;
	avgspeed = 100;
	race1 = fuelcapacity * avgspeed;
}