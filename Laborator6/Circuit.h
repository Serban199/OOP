#pragma once
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
using std::string;
class Circuit {
	int length = 0;
	Weather weather;
	Car* cars[25];
	int cars_number = 0;
public:
	void SetLength(int n);
		void SetWeather(Weather c );
		void AddCar(Car* Car1);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};