#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

private:
	const std::string	_target;
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm& c);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& c );
	~ShrubberyCreationForm( void );

	void	executeAction( void );
};

#endif
