#pragma once
#include <iostream>
#include <string>
#include "ContactType.h"
using namespace std;
class Contact
{
public:
	string name;
public:
	///Contact(string a0, string a1, string a2, string a3);
	///Contact(string b0, string b1);
	Contact(string temp)
	{
		name = temp;
	}
	virtual contactType getType() = 0;
	virtual void Print()=0;

};

