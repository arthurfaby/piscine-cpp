// ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.4wangouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 11:23:31 by afaby             #+#    #+#             */
/*   Updated: 2023/01/06 17:22:11 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template < class T >
class Array
{

private:
	T*				content;
	unsigned int	content_size;

public:
	Array( void );
	Array( unsigned int n );
	Array( const Array< T > &c );	
	Array& operator=( const Array& c );
	~Array( void );
	T&	operator[]( int index ) const;

	unsigned int	size( void ) const;
};

template < typename T >
Array< T >::Array( void )
{
	this->content = NULL;
	this->content_size = 0;
}

template < typename T >
Array< T >::Array( unsigned int n )
{
	unsigned int	i = 0;

	this->content = new T[n];
	this->content_size = n;

	while ( i < n - 1 )
	{
		this->content[i] = 0;
		i++;
	}
}

template < typename T >
Array< T >::Array( const Array< T >& c )
{
	unsigned int	i = 0;

	this->content = new T[c.size()];
	this->content_size = c.size();
	while ( i < c.size() )
	{
		this->content[i] = c[i];
		i++;
	}	
}

template <typename T >
Array< T >& Array< T >::operator=( const Array< T >& c )
{
	unsigned int	i = 0;

	this->content = new T[c.size()];
	this->content_size = c.size();
	while ( i < c.size() )
	{
		this->content[i] = c[i];
		i++;
	}	
	return (*this);
}

template < typename T >
T&	Array< T >::operator[]( int index ) const
{
	if (index < 0 || index >= (int)this->content_size)
		throw std::out_of_range("[ERROR] out of bounds exception.");
	return (this->content[index]);
}

template < typename T >
Array< T >::~Array( void )
{
	if (this->content)
		delete[] this->content;
	return ;
}

template < typename T >
unsigned int Array< T >::size( void ) const
{
	return (this->content_size);
}

#endif
