#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

private:
	const std::string	_target;
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm& c);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& c );
	~PresidentialPardonForm( void );

	void	executeAction( void );
};

#endif
