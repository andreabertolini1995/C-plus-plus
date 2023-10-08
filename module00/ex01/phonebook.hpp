#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string> 
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

const int maxNumContacts = 8;

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
        Contact contacts[maxNumContacts];
        int     currentNumberOfContacts;
        PhoneBook(int n) {
            currentNumberOfContacts = n;
        }
};

#endif

