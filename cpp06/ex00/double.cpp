#include "convert.hpp"

static int	handle_particulars_double(std::string arg)
{
	if (!arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("nanf"))
	{
		std::cout << "double: " << arg.substr(0, arg.length() - 1) << std::endl;
		return (1);
	}
	else if (!arg.compare("+inf") || !arg.compare("-inf") || !arg.compare("nan"))
	{
		std::cout << "double: " << arg << std::endl;
		return (1);
	}
	return (0);
}

void	treat_double( std::string arg )
{
	int		is_possible;
	float	res;

	if (handle_particulars_double(arg))
		return ;
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
	std::cout << "float: ";
	if (!is_possible)
		std::cout << "impossible";
	else
	{
		std::cout << (double)res;
		if ((double)res == (int)res)
			std::cout << ".0";
	}
	std::cout << std::endl;

}
