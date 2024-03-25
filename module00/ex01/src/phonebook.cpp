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

    cout << "\n";

    return newContact;
}

void    searchContact(string inputCommand, PhoneBook phonebook) {
    inputCommand = "42";
    
    while (!isValid(inputCommand, phonebook.currentNumberOfContacts)) {
        
        cout << INDEX_PROMPT;
        cin >> inputCommand;
        
        int inputIndex;
        inputIndex = stoi(inputCommand);
        if (!isValid(inputCommand, phonebook.currentNumberOfContacts)) {
            cerr << "Please insert a valid numberic value between 0 and " << phonebook.currentNumberOfContacts - 1 << endl;
        }
        else {
            printContactInformation(phonebook.contacts[inputIndex]);
        }
    }
}

int main() {
    PhoneBook phonebook(0);
    string inputCommand;

    while (inputCommand.compare(EXIT) != 0) {
        
        cout << COMMAND_PROMPT;
        cin >> inputCommand;
        
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
