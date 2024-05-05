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
    newContact.setLastName(lastName);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickName);
    newContact.setNickName(nickName);

    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    newContact.setPhoneNumber(phoneNumber);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);
    newContact.setDarkestSecret(darkestSecret);

    std::cout << "\n";

    return newContact;
}

int main() {
    PhoneBook   phonebook(0);
    std::string inputCommand;

    while (inputCommand.compare(EXIT) != 0) {
        
        std::cout << COMMAND_PROMPT;
        std::getline(std::cin, inputCommand);
        
        if (inputCommand.compare(ADD) == 0) {
            Contact newContact = createNewContact();
            phonebook.addNewContact(newContact);
        }
        else if (inputCommand.compare(SEARCH) == 0) {
            phonebook.printContactsTable();
            phonebook.searchContact(inputCommand);
        }
        else
            continue;
    }
    return (0);
}
