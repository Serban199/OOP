#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Contact.h"
#include "Friend.h"
#include "ContactType.h"
using namespace std;
class AdressBook
{
	vector<Contact*> contacts;
public:

	Contact* SearchName(string name);
	vector<Friend*> Allfriends();
	void DeleteContact(string name);
	void AddContact(Contact* name);
	void PrintAllContacts();
};

