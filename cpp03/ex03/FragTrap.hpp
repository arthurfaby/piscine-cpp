#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

private:
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap(const FragTrap& c);
	FragTrap& operator=(const FragTrap& c );
	~FragTrap( void );

	void	highFiveGuys( void );
};

#endif
