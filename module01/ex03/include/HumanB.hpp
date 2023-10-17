#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string> 
#include <iostream>
#include "Weapon.hpp"
using namespace std;

class HumanB {
    private:
        string name;
        Weapon *weapon; // pointer to weapon

    public:
        HumanB(string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif