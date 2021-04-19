/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:40:44 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 18:21:21 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _sType(type) {}

Weapon::~Weapon() {}

std::string const	Weapon::getType(void) const
{
	return (this->_sType);
}

void				Weapon::setType(std::string type)
{
	this->_sType = type;
}

