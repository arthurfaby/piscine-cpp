#include <iostream>
#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "[Brain] Default constructor called." << std::endl;
	return ;
}

Brain::Brain( const Brain& c )
{
	int	i( 0 );

	std::cout << "[Brain] Copy constructor called." << std::endl;
	while ( i < 100 )
	{
		ideas[i] = c.ideas[i];
		i++;
	}
	return ;
}

Brain& Brain::operator=( const Brain& c )
{
	int	i( 0 );

	std::cout << "[Brain] Copy assignment operator called." << std::endl;
	while ( i < 100 )
	{
		ideas[i] = c.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain( void )
{
	std::cout << "[Brain] Destructor called." << std::endl;
	return ;
}
