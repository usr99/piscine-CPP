/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:39:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 19:27:03 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "FragTrap.hpp"  

std::string	FragTrap::_vaulhunter_outputs[5] = {
	"FR4G-TP roule sur target. ** VVVVRROOOOOOOM !!! **",
	"FR4G-TP bondit sur target. ** bruit de bondissement j'imagine **",
	"FR4G-TP lance une boule de feu sur target, oui oui, il peut faire ça.",
	"FR4G-TP fusille target du regard.",
	"FR4G-TP fusille target pour de vrai. Avec le sang."
};

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) :
_nHitPoints(100), _nMaxHitPoints(100), _nEnergyPoints(100), _nMaxEnergyPoints(100),
_nLevel(1), _sName(name), _nMeleeAttackDmg(30), _nRangedAttackDmg(20),
_nArmorDmgReduction(5)
{
	std::srand(std::time(0));
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

void		FragTrap::takeDamage(unsigned int amount)
{
	int	damage;

	damage = amount - this->_nArmorDmgReduction;
	if (damage < 0)
		damage = 0;

	std::cout << "Je sens plus mes doigts... AAAHHHH mais j'ai ai pas en fait !" << std::endl;
	std::cout << "FR4G-TP perd " << damage << "HP." << std::endl;

	this->_nHitPoints -= damage;
	if (this->_nHitPoints < 0)
		this->_nHitPoints = 0;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "C'est l'heure de la mise au point." << std::endl;
	std::cout << "FR4G-TP récupère " << amount << "HP." << std::endl;
	
	this->_nHitPoints += amount;
	if (this->_nHitPoints > this->_nMaxHitPoints)
		this->_nHitPoints = this->_nMaxHitPoints;
}

void		FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	int		nIdAttack;
	size_t	pos;

	if (this->_nEnergyPoints < 25)
	{
		std::cout << "OOM" << std::endl;
		return ;
	}
	nIdAttack = std::rand() % 5;
	pos = FragTrap::_vaulhunter_outputs[nIdAttack].find("target");
	std::cout << FragTrap::_vaulhunter_outputs[nIdAttack].substr().replace(pos, 6, target) << std::endl;
	this->_nEnergyPoints -= 25;
}

int			FragTrap::getHitPoints(void) { return (this->_nHitPoints); }
int			FragTrap::getEnergyPoints(void) { return (this->_nEnergyPoints); }

FragTrap&	FragTrap::operator=(FragTrap const& src)
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
