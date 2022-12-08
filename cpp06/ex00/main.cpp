#include "convert.hpp"

int	check_float_format( std::string arg )
{
	const char	*str;
	int			i;

	str = arg.c_str();
	i = 0;
	if (str[i] == '-')
		i++;
	if (!isdigit(str[i]) && str[i] != '.')
		return (0);
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	if (str[i - 1] == '.' && !isdigit(str[i]))
		return (0);
	while (str[i] && isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	if (!str[i])
		return (1);
	return (0);
}

void	print_all( std::string arg )
{
	treat_char(arg);
	treat_int(arg);
	treat_float(arg);
	treat_double(arg);
}

int	main( int argc, char *argv[] )
{
	std::string	arg;

	if (argc != 2)	
		return (1);
	arg = std::string(argv[1]);
	print_all( arg );
	return (0);
}
