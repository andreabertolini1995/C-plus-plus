#include "../include/Zombie.hpp"

Zombie::Zombie() {} // default (dummy) constructor

Zombie::~Zombie() {
    cout << this->name << " is destroyed" << endl;
}

void    Zombie::announce(void) {
    cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}