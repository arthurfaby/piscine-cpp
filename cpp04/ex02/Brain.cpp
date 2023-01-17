#include <iostream>
#include "Brain.hpp"
#include <cstdlib>

Brain::Brain( void )
{
	const	std::string p_ideas[13] = {"🤭","🧐","🤓","😈","👿","🤡","👹","👺","💀","☠","👻","👽","👾"};

	std::cout << "[Brain] Default constructor called." << std::endl;
	for( int i = 0; i < 100; i++ )
		this->ideas[i] = p_ideas[rand() % 13];
	return ;
}

Brain::Brain( const Brain& c )
{
	int	i( 0 );

	std::cout << "[Brain] Copy constructor called." << std::endl;
	while ( i < 100 )
	{
		this->ideas[i] = c.ideas[i];
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
		this->ideas[i] = c.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain( void )
{
	std::cout << "[Brain] Destructor called." << std::endl;
	return ;
}

void	Brain::printIdeas( void ) const
{
	for( int i = 0; i < 100; i++ )
		std::cout << this->ideas[i];
}
