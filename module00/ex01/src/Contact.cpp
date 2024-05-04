#include "../include/PhoneBook.hpp"

Contact::Contact() {}
Contact::~Contact() {};

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = firstName;
}

void Contact::setNickName(std::string nickName) {
    this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->darkestSecret = darkestSecret;
}

// isValidContact checks if the contact contains empty fields
bool Contact::isValidContact() {
    if (this->firstName.empty() || this->lastName.empty()
        || this->nickName.empty() || this->phoneNumber.empty()
        || this->darkestSecret.empty())
        return false;
    return true;
}

