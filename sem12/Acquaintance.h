#pragma once
#include "Contact.h"
#include "ContactType.h"
class Acquaintance: public Contact 
{
	string phoneNumber;
public:
	contactType getType()
	{
		return ACQUAINTANCE;
	}
	Acquaintance(string b0, string b1):Contact( b0)
	{
		name = b0;
		phoneNumber = b1;
	}
	void Print()
	{
		cout <<name<< phoneNumber;
	}
};

