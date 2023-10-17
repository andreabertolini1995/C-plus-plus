#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string> 
#include <iostream>
#include "Weapon.hpp"
using namespace std;

class HumanA {
    private:
        string name;
        Weapon &weapon; // reference to weapon

    public:
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void attack();
};

#endif