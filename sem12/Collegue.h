#pragma once
#include "Contact.h"
#include "ContactType.h"
using namespace std;
class Collegue:public Contact
{
	string phoneNumber;
	string nameCompany;
	string adress;
public:
	contactType getType()
	{
		return COLLEGUE;
	}
	Collegue(string a0,string a1, string a2, string a3):Contact(a0)
	{
		name = a0;
		phoneNumber = a1;
		nameCompany = a2;
		adress = a3;
	}
	void Print()
	{
		cout << "Coleg:" <<" "<<name<< phoneNumber << nameCompany << adress;
	}
};

