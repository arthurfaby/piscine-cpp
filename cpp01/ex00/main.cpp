#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main( void )
{
	std::cout << "----- STACK -----" << std::endl;
	{
		Zombie	stack_zombie("stack_zompie");

		stack_zombie.announce();

	}
	std::cout << "----- HEAP -----" << std::endl;
	{
		Zombie	*heap_zombie;

		heap_zombie = newZombie("heap_zombie");
		heap_zombie->announce();
		delete heap_zombie;
	}
	std::cout << "----- RANDOM CHUMP -----" << std::endl;
	{
   		randomChump("TestZombie");
   		randomChump("TestZombie2");
   		randomChump("TestZombie3");
	}
}
