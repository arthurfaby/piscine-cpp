#include <iostream>
#include "Harl.hpp"

Harl::Harl( void )
{
	this->strings[0] = "DEBUG";
	this->strings[1] = "INFO";
	this->strings[2] = "WARNING";
	this->strings[3] = "ERROR";
	this->funcs[0] = &Harl::debug;
	this->funcs[1] = &Harl::info;
	this->funcs[2] = &Harl::warning;
	this->funcs[3] = &Harl::error;
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;;
}

void	Harl::complain( std::string level )
{
	int	level_index;
	int	i;

	level_index = -1;
	i = 0;
	while (i < 4 && level_index == -1)
	{
		if (this->strings[i].compare(level) == 0)
			level_index = i;
		i++;
	}
	if (level_index == -1)
		std::cerr << "Level not founded." << std::endl;
	else
		(this->*funcs[level_index])();
}
