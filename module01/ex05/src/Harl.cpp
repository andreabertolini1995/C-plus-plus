#include "../include/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

// Debug messages contain contextual information
void Harl::_debug() {
    std::cout << "This message contains contextual information." << std::endl;
}

// Info messages contain extensive information
void Harl::_info() {
    std::cout << "This message contains extensive information." << std::endl;
}

// Warning messages indicate a potential issue in the system
void Harl::_warning() {
    std::cout << "There is a potential issue in the system!" << std::endl;
}

// Error messages indicate an unrecoverable error has occured
void Harl::_error() {
    std::cout << "This is an unrecoverable message!" << std::endl;
}

void Harl::complain(std::string level) {

    // Initialize an array of complain levels
    std::string complainLevels[NUM_COMPLAIN_LEVELS] = {
        DEBUG,
        INFO,
        WARNING,
        ERROR,
    };

    // Initialize an array of pointers to member functions
    Logger loggerFunctions[4] = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error,
    };

    // Loop through the array to call the function of the given level
    // This is possible because both arrays are structured in the same way
    for (int i = 0; i < NUM_COMPLAIN_LEVELS; i++) {
        if (complainLevels[i].compare(level) == 0) {
            (this->*(loggerFunctions[i]))(); // this-> calls the function
            return ;
        }
    }

    std::cout << ERROR_INVALID_COMPLAIN_LEVEL << std::endl;
    return ;
}   