#include "Weapon.hpp"
#include <iostream>

class HumanB {

private:
    Weapon      *weapon;
    std::string name;

public:
    void    attack( void );
    void    setWeapon( Weapon &weapon );
    HumanB( std::string name );
    ~HumanB( void );
};