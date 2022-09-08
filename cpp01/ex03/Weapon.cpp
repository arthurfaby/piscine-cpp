#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
    this->type = type;
}


const std::string& Weapon::getType( void ) const
{
    const std::string&    ref(this->type);

    return (ref);
}

void    Weapon::setType( std::string new_type )
{
    this->type = new_type;
}