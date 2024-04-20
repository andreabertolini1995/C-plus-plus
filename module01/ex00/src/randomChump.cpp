#include "../include/Zombie.hpp"

void randomChump(std::string name) {
    Zombie *zombie = newZombie(name);

    (*zombie).announce();
    delete zombie; // this will invoke the destructor
}
