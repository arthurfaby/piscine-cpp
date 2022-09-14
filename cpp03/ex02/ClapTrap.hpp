#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

protected:
	std::string	name;
	int			hit_points;
	int			energy_points;
	int			attack_damage;

public:
	ClapTrap( void );
	ClapTrap( std::string _name );
	ClapTrap(const ClapTrap& c);
	ClapTrap& operator=(const ClapTrap& c);
	~ClapTrap( void );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif
