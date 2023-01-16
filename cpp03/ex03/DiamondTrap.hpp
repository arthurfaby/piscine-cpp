#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

private:
	std::string	name;

public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap(const DiamondTrap& c);
	DiamondTrap& operator=(const DiamondTrap& c );
	~DiamondTrap( void );

	using	ScavTrap::attack;
	void	whoAmI( void ) const;
};

#endif
