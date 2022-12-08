#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string _name )
{
    std::cout << "Construct zombie " << _name << std::endl;
    this->name = _name;
}

Zombie::~Zombie( void )
{
    std::cout << "Deconstruct zombie " << this->name << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
