#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string> 
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

const int   MAX_NUM_CONTACTS = 2;
const int   COLUMN_WIDTH = 10;

class Contact {
    public:
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
};

class PhoneBook {
    public:
        Contact contacts[MAX_NUM_CONTACTS];
        int     currentNumberOfContacts;
        
        PhoneBook(int n) {
            currentNumberOfContacts = n;
        }

        void    addNewContact(Contact contact) {
            if (this->currentNumberOfContacts == MAX_NUM_CONTACTS) {
                this->contacts[this->currentNumberOfContacts - 1] = contact;
            }
            else {
                this->contacts[this->currentNumberOfContacts] = contact;
                this->currentNumberOfContacts++;
            }
        }
};

void    printContactsTable(PhoneBook phonebook);

#endif
