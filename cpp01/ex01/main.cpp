#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main( void )
{
    Zombie *horde;
    int size;

    size = 50;
    horde = zombieHorde(size, "test");
    while (size--) {
        horde[size].announce();
        delete &horde[size];
    }
}