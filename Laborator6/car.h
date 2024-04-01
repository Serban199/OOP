#pragma once
#include <string>
class Car {
protected:
	int  fuelcapacity;
	double fuel_consumption;
	int avgspeed;
	int race1;
	string name;
public:
	virtual void SunnyCond() = 0;
	virtual void RainnyCond() = 0;
	virtual void SnowyCond() = 0;
};