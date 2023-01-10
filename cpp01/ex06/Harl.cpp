#include <iostream>
#include "Harl.hpp"

Harl::Harl( void )
{
	this->strings[0] = "DEBUG";
	this->strings[1] = "INFO";
	this->strings[2] = "WARNING";
	this->strings[3] = "ERROR";
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
	this->info();
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;;
	this->warning();
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	this->error();
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
	switch (level_index) 
	{
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
