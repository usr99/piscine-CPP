/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:50:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "ScavTrap.hpp"  

const std::string	ScavTrap::challenges[3] = {
	"Loot le proto-drake perdu dans le temps, deux fois.",
	"Monte sur les toits de Sanctuary et try hard le parcours improbable jusqu'à atteindre l'arrière du bar de Moxxi",
	"Speedrun Minecraft."
};

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 50;
	this->_nMaxEnergyPoints = 50;
	this->_nLevel = 1;
	this->_nMeleeAttackDmg = 20;
	this->_nRangedAttackDmg = 15;
	this->_nArmorDmgReduction = 3;
	
	std::cout << "** ouvre la porte **" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) { *this = src; }
	
ScavTrap::~ScavTrap() { std::cout << "** ferme la porte **" << std::endl; }

void		ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_sName;
	std::cout << " attaque " << target << " à distance,";
	std::cout << " causant " << this->_nRangedAttackDmg << " points de dégâts !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->_sName;
	std::cout << " attaque " << target << " en mélée,";
	std::cout << " causant " << this->_nMeleeAttackDmg << " points de dégâts !" << std::endl;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::cout << ScavTrap::challenges[std::rand() % 3] << std::endl;
}
