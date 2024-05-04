#include "../include/PhoneBook.hpp"

// A saved contact can’t have empty fields
Contact createNewContact() {
    Contact newContact;

    std::cout << "First name: ";
    std::cin >> newContact.firstName;

    std::cout << "Last name: ";
    std::cin >> newContact.lastName;

    std::cout << "Nickname: ";
    std::cin >> newContact.nickName;

    std::cout << "Phone Number: ";
    std::cin >> newContact.phoneNumber;

    std::cout << "Darkest secret: ";
    std::cin >> newContact.darkestSecret;

    std::cout << "\n";

    return newContact;
}

void    searchContact(std::string inputCommand, PhoneBook phonebook) {
    inputCommand = "42";
    
    while (!isValid(inputCommand, phonebook.currentNumberOfContacts)) {
        
        std::cout << INDEX_PROMPT;
        std::cin >> inputCommand;
        
        int inputIndex;
        std::istringstream(inputCommand) >> inputIndex;
        if (!isValid(inputCommand, phonebook.currentNumberOfContacts)) {
            std::cerr << "Please insert a valid numberic value between 0 and " << phonebook.currentNumberOfContacts - 1 << std::endl;
        }
        else {
            printContactInformation(phonebook.contacts[inputIndex]);
        }
    }
}

int main() {
    PhoneBook phonebook(0);
    std::string inputCommand;

    while (inputCommand.compare(EXIT) != 0) {
        
        std::cout << COMMAND_PROMPT;
        std::cin >> inputCommand;
        
        if (inputCommand.compare(ADD) == 0) {
            phonebook.addNewContact(createNewContact());
        }
        else if (inputCommand.compare(SEARCH) == 0) {
            printContactsTable(phonebook);
            searchContact(inputCommand, phonebook);
        }
        else
            continue;
    }
    return 0;
}
