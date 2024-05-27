#include "AdressBook.h"
using namespace std;
Contact* AdressBook::SearchName(string name)
{
	for (int i = 0; i < contacts.size(); i++)
	{
		if (contacts[i]->name == name)
		{
			Contact* temp = contacts[i];
			return temp;
		}
	}			
	return nullptr;
	
}

vector<Friend*> AdressBook::Allfriends()
{
	vector<Friend*> list;
	for (int i = 0; i < contacts.size(); i++)
	{
		if (contacts[i]->getType() == FRIEND)
			list.push_back(static_cast<Friend*>(contacts[i]));
	}
	return list;
}

void AdressBook::DeleteContact(string name)
{
	for(int i=0;i<contacts.size();i++)
		if (contacts[i]->name == name)
		{
			for (int j = i; j < contacts.size() - 1; j++)
				contacts[j] = contacts[j + 1];

		}
}

void AdressBook::AddContact(Contact* name)
{
	contacts.push_back(name);
}

void AdressBook::PrintAllContacts()
{
	for (auto contact : contacts )
		 contact->Print();


}

