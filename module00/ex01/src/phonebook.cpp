#include "../include/phonebook.hpp"

// A saved contact can’t have empty fields
Contact createNewContact() {
    Contact newContact;

    cout << "First name: ";
    cin >> newContact.firstName;

    cout << "Last name: ";
    cin >> newContact.lastName;

    cout << "Nickname: ";
    cin >> newContact.nickName;

    cout << "Phone Number: ";
    cin >> newContact.phoneNumber;

    cout << "Darkest secret: ";
    cin >> newContact.darkestSecret;

    return newContact;
}

int main() {
    PhoneBook phonebook(0);
    string inputCommand;

    while (inputCommand.compare("EXIT") != 0) {
        
        cout << "Please enter a command among ADD, SEARCH and EXIT: ";
        cin >> inputCommand;
        
        if (inputCommand.compare("ADD") == 0) {
            phonebook.addNewContact(createNewContact());
        }
        else if (inputCommand.compare("SEARCH") == 0) {
            printContactsTable(phonebook);
        }
        else
            continue;
    }
    return 0;
}
