#include "Weapon.hpp"
#include <iostream>

class HumanA {

private:
    Weapon&     weapon;
    std::string name;

public:
    void    attack( void );
    HumanA( std::string name, Weapon& weapon );
};