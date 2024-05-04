#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <cstring> 
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

const int   MAX_NUM_CONTACTS = 8;
const int   COLUMN_WIDTH = 10;

const std::string ADD = "ADD";
const std::string SEARCH = "SEARCH";
const std::string EXIT = "EXIT";

const std::string INDEX_PROMPT = "Please enter the index of the contact you would like to see: ";
const std::string COMMAND_PROMPT = "Please enter a command among ADD, SEARCH and EXIT: ";

class PhoneBook {
    private:
        Contact contacts[MAX_NUM_CONTACTS];
        int     currentNumberOfContacts;
       
    public:
        PhoneBook(int n);
        ~PhoneBook();
        void addNewContact(Contact contact);
};

void    printContactsTable(PhoneBook phonebook);
void    printContactInformation(Contact contact);
bool    isNumeric(std::string str);
bool    isValid(std::string str, int numContracts);

#endif
