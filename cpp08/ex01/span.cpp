/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:14:09 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/06 02:55:20 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <algorithm>
#include <iostream>
#include "span.hpp"  
	
span::span() : _tab(NULL), _size(0), _nValues(0) {}

span::span(unsigned int n) : _size(n), _nValues(0)
{
	this->_tab = new int[n];
	for (unsigned int i = 0; i < n; i++)
		this->_tab[i] = 0;
}

span::span(span const& src) : _tab(NULL) { *this = src; }

span::~span()
{
	delete [] this->_tab;
}

void span::addNumber(int n) 
{
	if (this->_nValues == this->_size)
		throw span::FullArrayException();
	
	this->_tab[this->_nValues] = n;
	this->_nValues++;
}

void span::addNumber(myIterator end, int n) 
{
	if (this->_nValues == this->_size)
		throw span::FullArrayException();

	myIterator	it(this->last());
	
	while (it != end)
	{
		*it = n;
		this->_nValues++;
		++it;
	}
}

int span::shortestSpan(void) const
{
	int	span = -1;
	int	tmp;
	
	if (this->_nValues < 2)
		throw span::NotEnoughValuesException();

	for (unsigned int i = 0; i < this->_nValues; i++)
	{
		for (unsigned int j = i + 1; j < this->_nValues; j++)
		{
			tmp = abs(this->_tab[i] - this->_tab[j]);
			if (span == -1)
				span = tmp;
			else
				span = std::min(tmp, span);
		}
	}
	return (span);
}

int span::longestSpan(void) const
{
	if (this->_nValues < 2)
		throw span::NotEnoughValuesException();

	span::myIterator	it(this->begin());
	span::myIterator	ite(this->last());
	
	int					biggest = *std::max_element(it, ite);
	int					smallest = *std::min_element(it, ite);

	return (biggest - smallest);
}

span::myIterator span::begin(void) const
{
	return (this->_tab);
}

span::myIterator span::end(void) const
{
	return (this->_tab + this->_size);
}

span::myIterator span::last(void) const
{
	return (this->_tab + this->_nValues);
}

span& span::operator=(span const& src) 
{
	this->_size = src._size;
	this->_nValues = src._nValues;
	if (this->_tab != NULL)
		delete [] this->_tab;
	this->_tab = new int[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_tab[i] = src._tab[i];
	return (*this);
}
