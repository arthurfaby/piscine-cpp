#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{

private:
	int					value;
	static const int	n_bits = 8;

public:
	Fixed( void );
	Fixed( const int n );
	Fixed( const float n );
	Fixed( const Fixed& c );
	Fixed& operator=( const Fixed& c );
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );
	
	int		toInt( void ) const;
	float	toFloat( void ) const;
};
std::ostream& operator<<( std::ostream& os, const Fixed& c);

#endif
