#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
    this->name = "";
    std::cout << "Construct zombie " << this->name << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << "Deconstruct zombie " << this->name << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
