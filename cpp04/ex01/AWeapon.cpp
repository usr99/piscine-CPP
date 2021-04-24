/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:23:13 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 05:19:12 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"  

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const& name, int apcost, int damage) :
_sName(name), _nApCost(apcost), _nDamage(damage) {}

AWeapon::AWeapon(AWeapon const& src)			{ *this = src; }

AWeapon::~AWeapon() {}

const std::string	AWeapon::getName(void) const	{ return (this->_sName); }
int					AWeapon::getAPCost(void) const	{ return (this->_nApCost); }
int					AWeapon::getDamage(void) const	{ return (this->_nDamage); }

AWeapon&			AWeapon::operator=(AWeapon const& src)
{
	this->_sName = src._sName;
	this->_nApCost = src._nApCost;
	this->_nDamage = src._nDamage;
	return (*this);
}
