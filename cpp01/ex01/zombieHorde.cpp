#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies = new Zombie[N];

    while (N--) {
        zombies[N].name = name;
    }
    return (zombies);
}