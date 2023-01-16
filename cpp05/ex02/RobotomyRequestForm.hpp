#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

private:
	const std::string	_target;
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm& c);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& c );
	~RobotomyRequestForm( void );

	void	executeAction( void );
};

#endif
