/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <afaby@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:23:10 by afaby             #+#    #+#             */
/*   Updated: 2023/01/19 15:33:01 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack(void);
	MutantStack( const MutantStack<T>& c );
	MutantStack<T>&	operator=( const MutantStack<T>& c );
	~MutantStack(void);
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void)
	{
		return (this->c.begin());
	}
	iterator end(void)
	{
		return (this->c.end());
	}
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T>& c ) : std::stack<T>(c)
{
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=( const MutantStack<T>& c )
{
	std::stack<T>::operator=(c);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
}
