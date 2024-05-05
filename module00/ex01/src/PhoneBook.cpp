#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(int n): numContacts(n) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addNewContact(Contact contact) {

    if (!contact.isValidContact()) {
        std::cerr << ERR_EMPTY_CONTACT_FIELDS << std::endl;
        return ;
    }

    if (this->numContacts == MAX_NUM_CONTACTS) {
        this->contacts[0] = contact;
    }
    else {
        this->contacts[this->numContacts] = contact;
        this->numContacts++;
    }
}

void    PhoneBook::printContactsTable() {
    printTableRow("Index", "First name", "Last name", "Nickname");
            
    for (int i = 0; i < this->numContacts; i++) {
        std::stringstream out;
        out << i;
        printTableRow(out.str(), this->contacts[i].getFirstName(),
            this->contacts[i].getLastName(), this->contacts[i].getNickname());
    }
}

void    PhoneBook::searchContact(std::string inputCommand) {
    inputCommand = DEFAULT_INPUT_COMMAND;
    
    while (!isValid(inputCommand, this->numContacts)) {
        
        std::cout << INDEX_PROMPT;
        std::getline(std::cin, inputCommand);
        
        int inputIndex;
        std::istringstream(inputCommand) >> inputIndex;
        if (!isValid(inputCommand, this->numContacts)) {
            std::cerr << ERR_INVALID_INDEX << this->numContacts - 1 << std::endl;
        }
        else {
            this->contacts[inputIndex].printContactInformation();
        }
    }
}
