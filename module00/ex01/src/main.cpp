#include "../include/PhoneBook.hpp"

Contact createNewContact() {
    Contact     newContact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "First name: ";
    std::getline(std::cin, firstName);
    newContact.setFirstName(firstName);

    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    newContact.lastName = lastName;

    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
    newContact.nickName = nickName;

    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    newContact.phoneNumber = phoneNumber;

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
    newContact.darkestSecret = darkestSecret;

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
        
        if (inputCommand.compare(ADD)) {
            Contact newContact = createNewContact();
            phonebook.addNewContact(newContact);
        }
        else if (inputCommand.compare(SEARCH)) {
            printContactsTable(phonebook);
            searchContact(inputCommand, phonebook);
        }
        else
            continue;
    }
    return 0;
}
