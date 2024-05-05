#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "MyAwesomePhoneBook.hpp"
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[MAX_NUM_CONTACTS];
        int     numContacts;
       
    public:
        PhoneBook(int n);
        ~PhoneBook();
        void addNewContact(Contact contact);
        void printContactsTable();
        void searchContact(std::string inputCommand);

};

#endif
