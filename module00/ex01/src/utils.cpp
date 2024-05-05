
#include "../include/PhoneBook.hpp"

static std::string  checkColumnSize(std::string col) {
    if (col.size() > COLUMN_WIDTH)
        return col.substr(0, COLUMN_WIDTH - 1) + ".";
    return col;
}

void    printTableRow(std::string col1, std::string col2, std::string col3, std::string col4) {

    col2 = checkColumnSize(col2);
    col3 = checkColumnSize(col3);
    col4 = checkColumnSize(col4);
    
    std::cout << std::setw(COLUMN_WIDTH) << col1 << "|"
         << std::setw(COLUMN_WIDTH) << col2 << "|"
         << std::setw(COLUMN_WIDTH) << col3 << "|"
         << std::setw(COLUMN_WIDTH) << col4 << "|" << std::endl;
}

bool isNumeric(std::string str) {
    for (std::string::size_type c = 0; c < str.length(); c++) {
        if (!isdigit(str[c])) {
            return false;
        }
    }
    return true;
}

bool isValid(std::string str, int numContacts) {
    int num;

    std::istringstream(str) >> num;
    if (!isNumeric(str) || num < 0 || num > (numContacts - 1))
        return false;
    return true;
}
