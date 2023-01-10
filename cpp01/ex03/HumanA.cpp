#include "HumanA.hpp"

HumanA::HumanA( std::string _name, Weapon& _weapon) : weapon(_weapon), name(_name)
{
    return;
}

void    HumanA::attack( void )
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
