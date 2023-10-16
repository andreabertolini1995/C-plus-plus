#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, string name) {
    
    Zombie *zombieHorde = new Zombie[N]; 

    for (int i = 0; i < N; i++) {
        zombieHorde[i] = Zombie(name); // here the zombie is already destroyed somehow
        zombieHorde[i].announce();
    }

    return (zombieHorde);
}
