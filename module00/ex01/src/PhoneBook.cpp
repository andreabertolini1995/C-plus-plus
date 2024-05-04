#include "../include/PhoneBook.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int n): numContacts(n) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addNewContact(Contact contact) {

    if (!contact.isValidContact()) {
        std::cerr << ERR_EMPTY_CONTACT_FIELDS << std::endl;
        return;
    }

    if (this->numContacts == MAX_NUM_CONTACTS) {
        this->contacts[this->numContacts - 1] = contact;
    }
    else {
        this->contacts[this->numContacts] = contact;
        this->numContacts++;
    }
}
