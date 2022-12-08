#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm& c);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& c );
	~ShrubberyCreationForm( void );

	void	beSigned( const Bureaucrat& bc );
};

#endif
