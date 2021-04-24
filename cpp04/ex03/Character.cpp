/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:06:34 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 17:45:22 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"  
	
Character::Character() {}

Character::Character(std::string name) : _name(name)
{
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

Character::Character(Character const& src)			{ *this = src; }

Character::~Character()								{ destroyMaterias(); }

void				Character::equip(AMateria* m)
{
	int	i = 0;

	while (this->_inventory[i] != NULL && i < 4)
		i++;
	if (i == 4)
		return ;

	this->_inventory[i] = m;
}

void				Character::unequip(int idx)
{
	if (checkExistingMateria(idx) == false)
		return ;
	this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (checkExistingMateria(idx) == false)
		return ;
	this->_inventory[idx]->use(target);
}

std::string const&	Character::getName(void) const	{ return (this->_name); }

Character&			Character::operator=(Character const& src)
{
	destroyMaterias();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	this->_name = src._name;
	return (*this);
}

bool				Character::checkExistingMateria(int idx)
{
	if (idx < 0 || idx >= 4)
		return (false);
	else if (this->_inventory[idx] == NULL)
		return (false);
	
	return (true);
}

void				Character::destroyMaterias(void)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}
