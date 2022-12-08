#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

int main( void )
{
    Zombie *horde;
    int size;
	int	i;

    size = 50;
	i = 0;
    horde = zombieHorde(size, "test");
    while (i < size) {
		std::cout << "Horde[" << i << "] : " << &horde[i] << std::endl;
        horde[i].announce();
        delete &horde[i];
		i++;
    }
	//delete horde;
}
