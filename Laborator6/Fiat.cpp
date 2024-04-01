#include "Fiat.h"
using  namespace std;
Fiat::Fiat()
{
	name = "Fiat";
}

void Fiat::SunnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 8;
	avgspeed = 30;
	race1 = fuelcapacity * avgspeed;
}

void Fiat::RainnyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 9;
	avgspeed = 20;
	race1 = fuelcapacity * avgspeed;
}
void Fiat::SnowyCond()
{
	fuelcapacity = 50;
	fuel_consumption = 12;
	avgspeed = 100;
	race1 = fuelcapacity * avgspeed;
}