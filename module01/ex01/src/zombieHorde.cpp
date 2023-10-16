#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, string name) {
    
    Zombie *zombieHorde = new Zombie[N]; 

    for (int i = 0; i < N; i++) {
        string *ptr = (string*) &zombieHorde[i]; // access the private attribute
        *ptr = name;
        zombieHorde[i].announce();
    }

    return (zombieHorde);
}
