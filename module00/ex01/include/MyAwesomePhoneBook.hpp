#ifndef MY_AWESOME_PHONEBOOK_HPP
# define MY_AWESOME_PHONEBOOK_HPP

#include <cstring> 
#include <iostream>
#include <iomanip>
#include <sstream>

const int   MAX_NUM_CONTACTS = 8;
const int   COLUMN_WIDTH = 10;

const std::string ADD = "ADD";
const std::string SEARCH = "SEARCH";
const std::string EXIT = "EXIT";

const std::string INDEX_PROMPT = "Please enter the index of the contact you would like to see: ";
const std::string COMMAND_PROMPT = "Please enter a command among ADD, SEARCH and EXIT: ";

const std::string ERR_EMPTY_CONTACT_FIELDS = "A saved contact can’t have empty fields";
const std::string ERR_INVALID_INDEX = "Please insert a valid numberic value between 0 and ";

const std::string DEFAULT_INPUT_COMMAND = "42";

void printTableRow(std::string col1, std::string col2, std::string col3, std::string col4);
bool isNumeric(std::string str);
bool isValid(std::string str, int numContracts);

#endif