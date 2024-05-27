#include "../include/Zombie.hpp"

Zombie::Zombie() {} // default (dummy) constructor

Zombie::~Zombie() {
    std::cout << this->_name << " is destroyed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}