/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:52:44 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"  

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _sName(name)
{
	std::srand(std::time(0));
	std::cout << "ClapTrap opérationnel !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) { *this = src; }
	
ClapTrap::~ClapTrap() { std::cout << "ClapTrap cassé..." << std::endl; }

void		ClapTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = amount - this->_nArmorDmgReduction;
	if (damage < 0)
		damage = 0;
	else
		std::cout << "Ouch !" << std::endl;

	this->_nHitPoints -= damage;
	if (this->_nHitPoints < 0)
		this->_nHitPoints = 0;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Je me sens invinciiiiiiible (comme le cheval)" << std::endl;

	this->_nHitPoints += amount;
	if (this->_nHitPoints > this->_nMaxHitPoints)
		this->_nHitPoints = this->_nMaxHitPoints;
}

int			ClapTrap::getHitPoints(void) { return (this->_nHitPoints); }
int			ClapTrap::getEnergyPoints(void) { return (this->_nEnergyPoints); }

ClapTrap&	ClapTrap::operator=(ClapTrap const& src)
{
	this->_nHitPoints = src._nHitPoints;
	this->_nMaxHitPoints = src._nMaxHitPoints;
	this->_nEnergyPoints = src._nEnergyPoints;
	this->_nMaxEnergyPoints = src._nMaxEnergyPoints;
	this->_nLevel = src._nLevel;
	this->_sName = src._sName;
	this->_nMeleeAttackDmg = src._nMeleeAttackDmg;
	this->_nRangedAttackDmg = src._nRangedAttackDmg;
	this->_nArmorDmgReduction = src._nArmorDmgReduction;

	return (*this);
}
