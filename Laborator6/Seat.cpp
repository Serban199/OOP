#include "Seat.h"
using  namespace std;
Seat::Seat()
{
	name = "Seat";
}

void Seat::SunnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 8;
	avgspeed = 30;
	race1 = fuelcapacity * avgspeed;
}

void Seat::RainnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 9;
	avgspeed = 20;
	race1 = fuelcapacity * avgspeed;
}
void Seat::SnowyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 12;
	avgspeed = 100;
	race1 = fuelcapacity * avgspeed;
}