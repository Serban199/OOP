#include "AdressBook.h"
#include "Friend.h"
#include "Acquaintance.h"
#include "Collegue.h"
#include "Contact.h"
#include "ContactType.h"
#include <iostream>
int main() {
    AdressBook addressBook;

    addressBook.AddContact(new Friend("Alice", "01/01/1990", "123-456-7890", "123 Maple St"));
    addressBook.AddContact(new Acquaintance("Bob", "987-654-3210"));
    addressBook.AddContact(new Collegue("Charlie", "555-555-5555", "Tech Corp", "456 Oak St"));

    std::cout << "All contacts:" << std::endl;
    addressBook.PrintAllContacts();

    
    return 0;
}
