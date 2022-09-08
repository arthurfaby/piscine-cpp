#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name)
{
    this->weapon = NULL;
    return;
}

HumanB::~HumanB( void )
{
    return ;
}

void    HumanB::attack( void )
{
    if (!this->weapon)
        std::cout << this->name << "attacks with their arms " << std::endl;

    std::cout << this->name << "attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon )
{
    this->weapon = &weapon;
}