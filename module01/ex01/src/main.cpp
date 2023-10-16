#include "../include/Zombie.hpp"

int main() {
    Zombie *zombies = zombieHorde(5, "Andrea");
    delete []zombies;
}
