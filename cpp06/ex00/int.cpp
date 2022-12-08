#include "convert.hpp"

void	treat_int( std::string arg )
{
	int		is_possible;
	float	res;

	is_possible = 1;
	if (arg.length() > 1 && !check_float_format(arg))
		is_possible = 0;
	else
	{
		if (!isdigit(arg[0]) && arg[0] != '-' && arg[0] != '.')
			res = arg[0];
		else
			res = std::atof(arg.c_str());
		// TREAT OVERFLOW
	}
	std::cout << "int: ";
	if (!is_possible)
		std::cout << "impossible";
	else
		std::cout << (int)res;
	std::cout << std::endl;

}
