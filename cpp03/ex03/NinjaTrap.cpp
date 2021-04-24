/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:50:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "NinjaTrap.hpp"  

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_nHitPoints = 60;
	this->_nMaxHitPoints = 60;
	this->_nEnergyPoints = 120;
	this->_nMaxEnergyPoints = 120;
	this->_nLevel = 1;
	this->_nMeleeAttackDmg = 60;
	this->_nRangedAttackDmg = 5;
	this->_nArmorDmgReduction = 0;
	
	std::cout << "Ninja !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src) { *this = src; }
	
NinjaTrap::~NinjaTrap() { std::cout << "Ninjaaa..." << std::endl; }

void		NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << "N1NJ4-TP " << this->_sName;
	std::cout << " attaque " << target << " à distance,";
	std::cout << " causant " << this->_nRangedAttackDmg << " points de dégâts !" << std::endl;
}

void		NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << "N1NJ4-TP " << this->_sName;
	std::cout << " attaque " << target << " en mélée,";
	std::cout << " causant " << this->_nMeleeAttackDmg << " points de dégâts !" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap& target)
{
	std::cout << "Un simple ClapTrap ! Quel ancêtre ! Meurs !" << std::endl;
	this->rangedAttack(target.getName());
}

void		NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << "Je vais te tuer en premier ! FR4G-TP !" << std::endl;
	this->meleeAttack(target.getName());
}

void		NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << "Prépare toi à fermer la porte derrière moi " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << "oh. Salut " << target._sName << std::endl;
}

