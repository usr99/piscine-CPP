/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:50:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"  

SuperTrap::SuperTrap() {}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 120;
	this->_nMaxEnergyPoints = 120;
	this->_nLevel = 1;
	this->_nMeleeAttackDmg = 60;
	this->_nRangedAttackDmg = 20;
	this->_nArmorDmgReduction = 5;
	
	std::cout << "SUP3R-TP PRÊT A L'ASSAUT" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& src) { *this = src; }
	
SuperTrap::~SuperTrap() { std::cout << "SUP3R-TP A ÉCHOUÉ..." << std::endl; }

void		SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}
