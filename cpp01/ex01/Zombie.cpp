#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->name = "";
}

Zombie::~Zombie( void )
{
    std::cout << "Deconstruct zombie " << this->name << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}