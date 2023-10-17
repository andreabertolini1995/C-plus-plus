#include "../include/Zombie.hpp"

Zombie::Zombie(string n) {
    name = n;
}

Zombie::~Zombie() { cout << this->name << " is destroyed" << endl; }

void    Zombie::announce(void) {
    cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}