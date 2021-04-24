/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:49:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"  

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_nHitPoints = 100;
	this->_nMaxHitPoints = 100;
	this->_nEnergyPoints = 100;
	this->_nMaxEnergyPoints = 100;
	this->_nLevel = 1;
	this->_nMeleeAttackDmg = 30;
	this->_nRangedAttackDmg = 20;
	this->_nArmorDmgReduction = 5;
	
	std::cout << "Séquence d'initiation terminée." << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) { *this = src; }
	
FragTrap::~FragTrap() { std::cout << "Je suis mort, je suis mort. Oh mon dieu, je suis mort." << std::endl; }

void		FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_sName;
	std::cout << " attaque " << target << " à distance,";
	std::cout << " causant " << this->_nRangedAttackDmg << " points de dégâts !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_sName;
	std::cout << " attaque " << target << " en mélée,";
	std::cout << " causant " << this->_nMeleeAttackDmg << " points de dégâts !" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int	nIdAttack;

	if (this->_nEnergyPoints < 25)
	{
		std::cout << "OOM" << std::endl;
		return ;
	}

	nIdAttack = std::rand() % 5;

	if (nIdAttack == 0)
		std::cout << "FR4G-TP roule sur " << target << ". ** VVVVRROOOOOOOM !!! **" << std::endl;
	else if (nIdAttack == 1)
		std::cout << "FR4G-TP bondit sur " << target << ". ** bruit de bondissement j'imagine **" << std::endl;
	else if (nIdAttack == 2)
		std::cout << "FR4G-TP lance une boule de feu sur " << target << ", oui oui, il peut faire ça." << std::endl;
	else if (nIdAttack == 3)
		std::cout << "FR4G-TP fusille " << target << " du regard." << std::endl;
	else
		std::cout << "FR4G-TP fusille " << target << " pour de vrai. Avec le sang." << std::endl;

	this->_nEnergyPoints -= 25;
}
