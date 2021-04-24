/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:38:46 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 17:14:14 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"  
	
Character::Character() {}

Character::Character(std::string const& name) :
_sName(name), _nAP(40), _ptrWeapon(NULL) {}

Character::Character(Character const& src)				{ *this = src; }

Character::~Character() {}

void				Character::recoverAP(void)
{
	this->_nAP = std::min(this->_nAP + 10, 40);
}

void				Character::equip(AWeapon* weapon)
{
	this->_ptrWeapon = weapon;
}

void				Character::attack(Enemy* enemy)
{
	if (!this->_ptrWeapon)
		return ;
	if (this->_nAP < this->_ptrWeapon->getAPCost())
	{
		std::cout << "You need more AP to attack." << std::endl;
		return ;
	}

	std::cout << this->_sName << " attacks ";
	std::cout << enemy->getType() << " with a ";
	std::cout << this->_ptrWeapon->getName() << std::endl;

	this->_ptrWeapon->attack();
	this->_nAP = std::max(this->_nAP - this->_ptrWeapon->getAPCost(), 0);
	enemy->takeDamage(this->_ptrWeapon->getDamage());

	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const	Character::getName(void) const		{ return (this->_sName); }
int					Character::getAP(void) const		{ return (this->_nAP); }
AWeapon*			Character::getWeapon(void) const	{ return (this->_ptrWeapon); }

Character&			Character::operator=(Character const& src)
{
	this->_sName = src._sName;
	this->_nAP = src._nAP;
	this->_ptrWeapon = src._ptrWeapon;
	return (*this);
}

std::ostream&		operator<<(std::ostream& output, Character const& character)
{
	output << character.getName() << " has ";
	output <<  character.getAP() << " AP and ";   
	
	if (character.getWeapon())
		output << "wields a " << character.getWeapon()->getName() << std::endl;
	else
		output << "is unarmed" << std::endl;

	return (output);
}
