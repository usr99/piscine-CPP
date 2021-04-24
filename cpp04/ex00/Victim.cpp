/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:01:35 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 03:21:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name) : _sName(name)
{
	std::cout << "Some random victim called " << this->_sName << " just appeared!" << std::endl;
}

Victim::Victim(Victim const& src) 
{
	*this = src;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_sName << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_sName << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName(void) const	{ return (this->_sName); }

Victim& Victim::operator=(Victim const& src) 
{
	this->_sName = src._sName;
	return (*this);
}

std::ostream& operator<<(std::ostream& output, Victim const& Victim) 
{
	output << "I'm " << Victim.getName() << " and I like otters!" << std::endl;
	return (output);
}
