#include "../include/PhoneBook.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int n): currentNumberOfContacts(n) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addNewContact(Contact contact) {

    // Check if empty fields have been inserted
    if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty()) {
        std::cerr << "A saved contact can’t have empty fields" << std::endl;
        return NULL;
    }
    if (this->currentNumberOfContacts == MAX_NUM_CONTACTS) {
        this->contacts[this->currentNumberOfContacts - 1] = contact;
    }
    else {
        this->contacts[this->currentNumberOfContacts] = contact;
        this->currentNumberOfContacts++;
    }
}
