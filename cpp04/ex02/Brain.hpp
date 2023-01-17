#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{

private:
	std::string	ideas[100];
public:
	Brain( void );
	Brain(const Brain& c);
	Brain& operator=(const Brain& c );
	~Brain( void );

	void	printIdeas( void ) const;
};

#endif
