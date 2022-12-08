#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{

protected:
	std::string	type;
public:
	WrongAnimal( void );
	WrongAnimal( std::string _type );
	WrongAnimal(const WrongAnimal& c);
	WrongAnimal& operator=(const WrongAnimal& c );
	~WrongAnimal( void );

	std::string		getType( void ) const;
	void			setType( std::string name );
	void			makeSound( void ) const;
};

#endif
