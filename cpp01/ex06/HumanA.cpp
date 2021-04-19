/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:03:25 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 18:22:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
		
HumanA::HumanA(std::string name, Weapon& weapon) : _sName(name), _refWeapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack(void) const
{
	std::cout << this->_sName << " attacks with his " << this->_refWeapon.getType() << std::endl;
}
