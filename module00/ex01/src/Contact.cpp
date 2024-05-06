#include "../include/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {};

void Contact::setFirstName(std::string firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
    this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
    this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return (this->_firstName);
}

std::string Contact::getLastName() {
    return (this->_lastName);
}

std::string Contact::getNickname() {
    return (this->_nickName);
}

std::string Contact::getPhoneNumber() {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret() {
    return (this->_darkestSecret);
}

bool Contact::isValidContact() {
    if (this->_firstName.empty() || this->_lastName.empty()
        || this->_nickName.empty() || this->_phoneNumber.empty()
        || this->_darkestSecret.empty())
        return false;
    return true;
}

void Contact::printContactInformation() {

    std::cout << "First name: " << this->_firstName << std::endl;
    std::cout << "Last name: " << this->_lastName << std::endl;
    std::cout << "Nickname: " << this->_nickName << std::endl;

}

