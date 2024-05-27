#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name); // memory allocated on the heap
}