#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string> 
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

const int   MAX_NUM_CONTACTS = 8;
const int   COLUMN_WIDTH = 10;

const string ADD = "ADD";
const string SEARCH = "SEARCH";
const string EXIT = "EXIT";

const string INDEX_PROMPT = "Please enter the index of the contact you would like to see: ";
const string COMMAND_PROMPT = "Please enter a command among ADD, SEARCH and EXIT: "


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
void    printContactInformation(Contact contact);
bool    isNumeric(string str);
bool    isValid(string str, int numContracts);

#endif
