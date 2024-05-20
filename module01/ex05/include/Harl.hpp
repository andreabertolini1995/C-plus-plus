#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

const std::string DEBUG = "DEBUG";
const std::string INFO = "INFO";
const std::string WARNING = "WARNING";
const std::string ERROR = "ERROR";
const std::string ERROR_INVALID_COMPLAIN_LEVEL = "Error: Invalid complain level";
const int NUM_COMPLAIN_LEVELS = 4;

class Harl {
    private:
        void _debug();
        void _info();
        void _warning();
        void _error();

    public:
        Harl();
        ~Harl();
        void complain(std::string level);

        // Define the generic type of logger function (pointer to member functions)
        // This is possible because all the private member functions of the class Harl
        // have the same structure
        typedef void (Harl::*Logger)();
};

#endif