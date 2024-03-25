
#include "../include/phonebook.hpp"

static string  checkColumnSize(string col) {
    if (col.size() > COLUMN_WIDTH)
        return col.substr(0, COLUMN_WIDTH - 1) + ".";
    return col;
}

static void    printTableRow(string col1, string col2, string col3, string col4) {

    col2 = checkColumnSize(col2);
    col3 = checkColumnSize(col3);
    col4 = checkColumnSize(col4);
    
    cout << setw(COLUMN_WIDTH) << col1 << "|"
         << setw(COLUMN_WIDTH) << col2 << "|"
         << setw(COLUMN_WIDTH) << col3 << "|"
         << setw(COLUMN_WIDTH) << col4 << "|" << endl;
}

void    printContactsTable(PhoneBook phonebook) {
    printTableRow("Index", "First name", "Last name", "Nickname");
            
    for (int i = 0; i < phonebook.currentNumberOfContacts; i++) {
        stringstream out;
        out << i;
        printTableRow(out.str(), phonebook.contacts[i].firstName,
            phonebook.contacts[i].lastName, phonebook.contacts[i].nickName);
    }
}

// TODO: Prettify this print to align contacts information
void    printContactInformation(Contact contact) {

    cout << "First name: " << contact.firstName << endl;
    cout << "Last name: " << contact.lastName << endl;
    cout << "Nickname: " << contact.nickName << endl;

}

bool isNumeric(string str) {
    for (string::size_type c = 0; c < str.length(); c++) {
        if (!isdigit(str[c])) {
            return false;
        }
    }
    return true;
}

bool isValid(string str, int numContracts) {
    int num;

    num = stoi(str);
    if (!isNumeric(str) || num < 0 || num > (numContracts - 1))
        return false;
    return true;
}
