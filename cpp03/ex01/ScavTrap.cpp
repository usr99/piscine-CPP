/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 04:09:01 by mamartin         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string name) :
_nHitPoints(100), _nMaxHitPoints(100), _nEnergyPoints(50), _nMaxEnergyPoints(50),
_nLevel(1), _sName(name), _nMeleeAttackDmg(20), _nRangedAttackDmg(15),
_nArmorDmgReduction(3)
{
	std::srand(std::time(0));
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

void		ScavTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = amount - this->_nArmorDmgReduction;
	if (damage < 0)
		damage = 0;

	std::cout << "SCAVAMAAAAAL !!!" << std::endl;
	std::cout << "SC4V-TP perd " << damage << "HP." << std::endl;

	this->_nHitPoints -= damage;
	if (this->_nHitPoints < 0)
		this->_nHitPoints = 0;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Scavamieux." << std::endl;
	std::cout << "SC4V-TP récupère " << amount << "HP." << std::endl;
	
	this->_nHitPoints += amount;
	if (this->_nHitPoints > this->_nMaxHitPoints)
		this->_nHitPoints = this->_nMaxHitPoints;
}

void		ScavTrap::challengeNewcomer(void)
{
	std::cout << ScavTrap::challenges[std::rand() % 3] << std::endl;
}

int			ScavTrap::getHitPoints(void) { return (this->_nHitPoints); }
int			ScavTrap::getEnergyPoints(void) { return (this->_nEnergyPoints); }

ScavTrap&	ScavTrap::operator=(ScavTrap const& src)
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
