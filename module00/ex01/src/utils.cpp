
#include "../include/PhoneBook.hpp"

static std::string  checkColumnSize(std::string col) {
    if (col.size() > COLUMN_WIDTH)
        return col.substr(0, COLUMN_WIDTH - 1) + ".";
    return col;
}

static void    printTableRow(std::string col1, std::string col2, std::string col3, std::string col4) {

    col2 = checkColumnSize(col2);
    col3 = checkColumnSize(col3);
    col4 = checkColumnSize(col4);
    
    std::cout << std::setw(COLUMN_WIDTH) << col1 << "|"
         << std::setw(COLUMN_WIDTH) << col2 << "|"
         << std::setw(COLUMN_WIDTH) << col3 << "|"
         << std::setw(COLUMN_WIDTH) << col4 << "|" << std::endl;
}

void    printContactsTable(PhoneBook phonebook) {
    printTableRow("Index", "First name", "Last name", "Nickname");
            
    for (int i = 0; i < phonebook.currentNumberOfContacts; i++) {
        std::stringstream out;
        out << i;
        printTableRow(out.str(), phonebook.contacts[i].firstName,
            phonebook.contacts[i].lastName, phonebook.contacts[i].nickName);
    }
}

// TODO: Prettify this print to align contacts information
void    printContactInformation(Contact contact) {

    std::cout << "First name: " << contact.firstName << std::endl;
    std::cout << "Last name: " << contact.lastName << std::endl;
    std::cout << "Nickname: " << contact.nickName << std::endl;

}

bool isNumeric(std::string str) {
    for (std::string::size_type c = 0; c < str.length(); c++) {
        if (!isdigit(str[c])) {
            return false;
        }
    }
    return true;
}

bool isValid(std::string str, int numContracts) {
    int num;

    std::istringstream(str) >> num;
    if (!isNumeric(str) || num < 0 || num > (numContracts - 1))
        return false;
    return true;
}
