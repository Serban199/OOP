#pragma once
#include "Contact.h"
#include "ContactType.h"
class Friend: public Contact
{
	string dateOfbirth;
	string phoneNumber;
	string adress;
public:
	contactType getType()
	{
		return FRIEND;
	}
	Friend(string a0, string a1, string a2, string a3) :Contact(a0)
	{
		name = a0;
		dateOfbirth = a1;
		phoneNumber = a2;
		adress = a3;
	}
	 void Print() 
	{
		cout <<name<<" "<< dateOfbirth << " " << phoneNumber << " " << adress;
	}
};

