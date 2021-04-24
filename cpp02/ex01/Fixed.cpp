/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:32:59 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 02:06:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int		Fixed::_bitWidth = 8;
const int		Fixed::_bitWidthPower = 1 << Fixed::_bitWidth;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = nb << Fixed::_bitWidth;
}

Fixed::Fixed(float const fl)
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = (int)roundf(fl * Fixed::_bitWidthPower);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int				Fixed::getRawBits(void) const
{
	return (this->_value);
}

void			Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int				Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bitWidth);
}

float			Fixed::toFloat(void) const
{
	return ((float)this->_value / Fixed::_bitWidthPower);
}

Fixed&			Fixed::operator=(Fixed const& src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& output, Fixed const& fixed)
{
	output << fixed.toFloat();
	return (output);
}
