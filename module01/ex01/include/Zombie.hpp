#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string> 
#include <iostream>
using namespace std;

// Not sure if this class should be defined here or just declared as for the functions
class Zombie {

    private:
        string name;

    public:

        Zombie(string n) {
            name = n;
        }
        ~Zombie() { cout << this->name << " is destroyed" << endl; }

        void    announce(void) {
            cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
        }
        
};

Zombie* newZombie(string name);
void    randomChump(string name);

#endif
