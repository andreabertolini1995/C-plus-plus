#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {};

void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->lastName = lastName;
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

std::string Contact::getFirstName() {
    return (this->firstName);
}

std::string Contact::getLastName() {
    return (this->lastName);
}

std::string Contact::getNickname() {
    return (this->nickName);
}

std::string Contact::getPhoneNumber() {
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() {
    return (this->darkestSecret);
}

bool Contact::isValidContact() {
    if (this->firstName.empty() || this->lastName.empty()
        || this->nickName.empty() || this->phoneNumber.empty()
        || this->darkestSecret.empty())
        return false;
    return true;
}

void Contact::printContactInformation() {

    std::cout << "First name: " << this->firstName << std::endl;
    std::cout << "Last name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickName << std::endl;

}

