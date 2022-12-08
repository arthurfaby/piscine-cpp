#include "convert.hpp"

static int	handle_particulars_float(std::string arg)
{
	if (!arg.compare("+inff") || !arg.compare("-inff") || !arg.compare("nanf"))
	{
		std::cout << "float: " << arg << std::endl;
		return (1);
	}
	else if (!arg.compare("+inf") || !arg.compare("-inf") || !arg.compare("nan"))
	{
		std::cout << "float: " << arg << "f" << std::endl;
		return (1);
	}
	return (0);
}

void	treat_float( std::string arg )
{
	int		is_possible;
	float	res;

	is_possible = 1;
	if (handle_particulars_float(arg))
		return ;
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
		std::cout << res;
		if (res == (int)res)
			std::cout << ".0";
		std::cout << "f";
	}
	std::cout << std::endl;
}
