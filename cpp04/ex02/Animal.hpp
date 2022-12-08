#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{

protected:
	std::string	type;
public:
	Animal( void );
	Animal( std::string _type );
	Animal(const Animal& c);
	Animal& operator=(const Animal& c );
	virtual ~Animal( void );

	std::string		getType( void ) const;
	void			setType( std::string name );
	virtual void	makeSound( void ) const = 0;
};

#endif
