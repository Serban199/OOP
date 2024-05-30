#pragma once
#include<iostream>
#include<cstring>
#include<cmath>
#include <cstring>
using namespace std;
class Number
{
	 char* valuen;
	 int basen;
public:
	Number(const char* value, int base); // where base is between 2 and 16
	~Number()=default;

	void changeBase( int base);
	int transformNumber(const char c);
	int transformchar(int value);
	// add operators and copy/move constructor
	Number operator +(const  Number other);
	Number operator -(const  Number other);
	Number& operator =(const  Number& other);
	bool operator <(const Number other);
	bool operator <=(const Number other);
	bool operator >(const Number other);
	bool operator >=(const Number other);
	bool operator ==(const Number other);
	bool operator !=(const Number other);
	Number operator +=(const Number& other);
	Number& operator --();
	Number& operator--(int);
	int operator[](int x);
	Number & operator= (int x);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};
