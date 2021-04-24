/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:39:21 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 03:52:52 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}

AMateria::AMateria(std::string const& type) : _xp(0), _type(type) {}

AMateria::AMateria(AMateria const& src)					{ *this = src; }

AMateria::~AMateria() {}

void				AMateria::use(ICharacter& target)
{
	(void) target;
	this->_xp += 10;
}

std::string const&	AMateria::getType(void) const		{ return (this->_type); }
unsigned int		AMateria::getXP(void) const			{ return (this->_xp); }

AMateria&			AMateria::operator=(AMateria const& src)
{
	this->_xp = src._xp;
	return (*this);
}

