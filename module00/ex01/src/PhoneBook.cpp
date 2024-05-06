#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(int n): _numContacts(n) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addNewContact(Contact contact) {

    if (!contact.isValidContact()) {
        std::cerr << ERR_EMPTY_CONTACT_FIELDS << std::endl;
        return ;
    }

    if (this->_numContacts == MAX_NUM_CONTACTS) {
        this->_contacts[0] = contact;
    }
    else {
        this->_contacts[this->_numContacts] = contact;
        this->_numContacts++;
    }
}

void    PhoneBook::printContactsTable() {
    printTableRow("Index", "First name", "Last name", "Nickname");
            
    for (int i = 0; i < this->_numContacts; i++) {
        std::stringstream out;
        out << i;
        printTableRow(out.str(), this->_contacts[i].getFirstName(),
            this->_contacts[i].getLastName(), this->_contacts[i].getNickname());
    }
}

void    PhoneBook::searchContact(std::string inputCommand) {
    inputCommand = DEFAULT_INPUT_COMMAND;
    
    while (!isValid(inputCommand, this->_numContacts)) {
        
        std::cout << INDEX_PROMPT;
        std::getline(std::cin, inputCommand);
        
        int inputIndex;
        std::istringstream(inputCommand) >> inputIndex;
        if (!isValid(inputCommand, this->_numContacts)) {
            std::cerr << ERR_INVALID_INDEX << this->_numContacts - 1 << std::endl;
        }
        else {
            this->_contacts[inputIndex].printContactInformation();
        }
    }
}
