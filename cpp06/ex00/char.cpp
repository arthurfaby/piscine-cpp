#include "convert.hpp"

void	treat_char( std::string arg )
{
	int		is_possible;
	float	cast;

	is_possible = 1;
	if (check_float_format(arg))
	{
		cast = std::atof(arg.c_str());
		if (cast > 255 || cast < 0)
			is_possible = 0;
		else
		{
			arg[0] = (char)cast;
			is_possible = 1;
		}
	}
	else if (arg.length() != 1)
		is_possible = 0;
	std::cout << "char: ";
	if (!is_possible)
		std::cout << "impossible";
	else if (!isprint(arg[0]))
		std::cout << "Non displayable";
	else
 		std::cout << "'" << arg[0] << "'";
	std::cout << std::endl;

}
