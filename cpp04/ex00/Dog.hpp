#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog( void );
	Dog(const Dog& c);
	Dog& operator=(const Dog& c );
	~Dog( void );

	void	makeSound( void ) const;
};

#endif
