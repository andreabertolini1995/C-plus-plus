#include "phonebook.hpp"

// This also can be a member function
Contact createNewContact() {
    // A saved contact can’t have empty fields
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

// Maybe this can be a member function?
void    addContactToPhoneBook(PhoneBook *phonebook, Contact contact) {
    phonebook->contacts[phonebook->currentNumberOfContacts] = contact;
    phonebook->currentNumberOfContacts++;
}

// Maybe this could be moved to an utils.ccp file
void    printTableRow(string col1, string col2, string col3, string col4) {
    cout << col1 << setw(15)
         << col2 << setw(15)
         << col3 << setw(15)
         << col4 << endl;
}

void    printContactsTable(PhoneBook phonebook) {
    printTableRow("Index |", "First name |", "Last name |", "Nickname |"); // to modify
            
    for (int i = 0; i < phonebook.currentNumberOfContacts; i++) {
        stringstream out;
        out << i;
        printTableRow(out.str(), phonebook.contacts[i].firstName,
            phonebook.contacts[i].lastName, phonebook.contacts[i].nickName);
    }
}

int main() {
    PhoneBook phonebook(0);
    string inputCommand;

    while (inputCommand.compare("EXIT") != 0) {
        
        cout << "Please enter a command among ADD, SEARCH and EXIT: ";
        cin >> inputCommand;
        
        if (inputCommand.compare("ADD") == 0) {
            addContactToPhoneBook(&phonebook, createNewContact());
        }
        else if (inputCommand.compare("SEARCH") == 0) {
            printContactsTable(phonebook);
        }
        else
            continue;
    }
    return 0;
}