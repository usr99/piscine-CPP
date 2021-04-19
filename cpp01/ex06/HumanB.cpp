/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:03:25 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 18:23:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
		
HumanB::HumanB(std::string name) : _sName(name) {}

HumanB::~HumanB() {}

void	HumanB::attack(void) const
{
	std::cout << this->_sName << " attacks with his " << this->_ptrWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_ptrWeapon = &weapon;
}
