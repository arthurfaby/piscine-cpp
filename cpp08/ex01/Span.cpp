/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:33:56 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 11:39:30 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include "Span.hpp"

Span::Span( void )
{
	_size = 0;
	_max_size = 0;
	std::cout << "[\e[36mSpan\e[39m] Default constructor called." << std::endl;
	return ;
}

Span::Span( unsigned int N )
{
	_size = 0;
	_max_size = N;
	std::cout << "[\e[36mSpan\e[39m] Default constructor called." << std::endl;
	return ;
}

void	Span::addNumber( int to_add )
{
	if (_size == _max_size)
		throw SpanIsFull();
	_vec.push_back(to_add);
	_size++;
}

int		Span::shortestSpan( void ) const
{
	std::vector<int>	tmp_vec = _vec;
	int					shortest_span;

	if (_size < 2)
		throw CantComputeSpan();
	std::sort(tmp_vec.begin(), tmp_vec.end());
	shortest_span = tmp_vec[1] - tmp_vec[0];
	for (unsigned int i = 1; i < _size - 1; i++)
	{
		if (tmp_vec[i + 1] - tmp_vec[i] < shortest_span)
			shortest_span = tmp_vec[i + 1] - tmp_vec[i];
	}
	return (shortest_span);
}

int		Span::longestSpan( void ) const
{
	std::vector<int>	tmp_vec = _vec;

	if (_size < 2)
		throw CantComputeSpan();
	std::sort(tmp_vec.begin(), tmp_vec.end());
	return (tmp_vec[_size - 1] - tmp_vec[0]);
}

Span::Span( const Span& c )
{
	*this = c;
	std::cout << "[\e[36mSpan\e[39m] Copy constructor called." << std::endl;
	return ;
}

Span& Span::operator=( const Span& c )
{
	_size = c._size;
	_max_size = c._max_size;
	_vec = c._vec;
	std::cout << "[\e[36mSpan\e[39m] Copy assignment operator called." << std::endl;
	return *this;
}

Span::~Span( void )
{
	std::cout << "[\e[36mSpan\e[39m] Destructor called." << std::endl;
	return ;
}

unsigned int	Span::getSize( void ) const
{
	return (_size);
}

unsigned int	Span::getMaxSize( void ) const
{
	return (_max_size);
}

std::vector<int>&	Span::getArray( void )
{
	return (_vec);
}

std::ostream &	operator<<(std::ostream & os, Span & c)
{
	if (c.getSize() == 0)
		return (os << "Empty span.");
	os << "{";
	for (unsigned int i = 0; i < c.getSize() - 1; i++)
		os << c.getArray()[i] << ", ";
	os << c.getArray()[c.getSize() - 1] << "}";
	return (os);
}

const char	*Span::CantComputeSpan::what( void ) const throw()
{
	return ("[\e[31m\e[5mERROR\e[0m] Can't compute span.");
}

Span::CantComputeSpan::~CantComputeSpan( void ) throw() {}

const char	*Span::SpanIsFull::what( void ) const throw()
{
	return ("[\e[31m\e[5mERROR\e[0m] Span is full.");
}

Span::SpanIsFull::~SpanIsFull( void ) throw() {}
