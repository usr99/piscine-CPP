/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:14:41 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:21:05 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"  

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") { std::cout << "Gaaah. Me want smash heads!" << std::endl; }

SuperMutant::~SuperMutant() { std::cout << "Aaargh..." << std::endl; }

void			SuperMutant::takeDamage(int damage)
{
	if (this->_nHP < 0)
		return ;

	damage = std::min(damage - 3, this->_nHP);
	this->_nHP -= damage;
}
