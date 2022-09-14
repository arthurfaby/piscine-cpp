#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

private:
	int					value;
	static const int	n_bits = 8;

public:
	Fixed( void );
	Fixed(const Fixed& c);
	Fixed& operator=(const Fixed& c);
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

};

#endif
