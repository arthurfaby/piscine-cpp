/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:33:50 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 09:59:36 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
public:
	// Constructors
	Span( void );
	Span( unsigned int N );
	Span( const Span& c);
	Span& operator=(const Span& c );
	~Span( void );

	// Public member functions
	void	addNumber( int to_add );

	template<typename T>
	void	fill(T first, T last);

	int		shortestSpan( void ) const;
	int		longestSpan( void ) const;

	// Getters
	unsigned int		getSize( void ) const;
	unsigned int		getMaxSize( void ) const;
	std::vector<int>&	getArray( void );

private:
	// Private attributes
	unsigned int		_max_size;
	unsigned int		_size;
	std::vector<int>	_vec;

	// Private exceptions
	class CantComputeSpan : public std::exception
	{
	public:
		const char	*what( void ) const throw();
		~CantComputeSpan( void ) throw();
	};

	class SpanIsFull : public std::exception
	{
	public:
		const char	*what( void ) const throw();
		~SpanIsFull( void ) throw();
	};
	
};

template<typename T>
void	Span::fill(T first, T last)
{
	size_t	i = std::distance(first, last);

	if (i + this->_size > this->_max_size)
		throw std::out_of_range("[\e[91m\e[5mERROR\e[0m] Too much values to fill in.");
	this->_vec.insert(this->_vec.end(), first, last);
	this->_size = this->_vec.size();
}

std::ostream &	operator<<(std::ostream & os, Span & c);

#endif
