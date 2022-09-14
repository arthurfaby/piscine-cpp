#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

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
	~Fixed( void );
	
	Fixed& operator=( const Fixed& c );

	bool operator>( const Fixed& other ) const;
	bool operator<( const Fixed& other ) const;
	bool operator>=( const Fixed& other ) const;
	bool operator<=( const Fixed& other ) const;
	bool operator==( const Fixed& other ) const;
	bool operator!=( const Fixed& other) const;

	Fixed operator+( const Fixed& other ) const;
	Fixed operator-( const Fixed& other ) const;
	Fixed operator*( const Fixed& other ) const;
	Fixed operator/( const Fixed& other ) const;

	Fixed&	operator++( void );
	Fixed	operator++( int n );
	Fixed&	operator--( void );
	Fixed	operator--( int n );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );
	
	int		toInt( void ) const;
	float	toFloat( void ) const;

	static float	min( Fixed& a, Fixed& b );
	static float	min( const Fixed& a, const Fixed& b );
	static float	max( Fixed& a, Fixed& b );
	static float	max( const Fixed& a, const Fixed& b );	
};

std::ostream& operator<<( std::ostream& os, const Fixed& c);

#endif
