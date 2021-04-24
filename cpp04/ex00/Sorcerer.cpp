/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:01:35 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 03:21:25 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) : _sName(name), _sTitle(title)
{
	std::cout << this->_sName << ", " << this->_sTitle << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src) 
{
	*this = src;
}

Sorcerer::~Sorcerer() 
{
	std::cout << this->_sName << ", " << this->_sTitle << ", is dead. Consequences will never be the same!" << std::endl;
}

void			Sorcerer::polymorph(Victim const& victim) const
{
	victim.getPolymorphed();
}

std::string		Sorcerer::getName(void) const	{ return (this->_sName); }
std::string		Sorcerer::getTitle(void) const	{ return (this->_sTitle); }

Sorcerer&		Sorcerer::operator=(Sorcerer const& src) 
{
	this->_sName = src._sName;
	this->_sTitle = src._sTitle;
	return (*this);
}

std::ostream&	operator<<(std::ostream& output, Sorcerer const& sorcerer) 
{
	output << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}
