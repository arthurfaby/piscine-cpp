#include "Zombie.hpp"
Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main( void )
{
    randomChump("TestZombie");
    randomChump("TestZombie2");
    randomChump("");
    randomChump("TestZombie3");
}
