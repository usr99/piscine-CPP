/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:14:41 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 05:27:15 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"  

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const& type) : _sType(type), _nHP(hp) {}

Enemy::Enemy(Enemy const& src)					{ *this = src; }

Enemy::~Enemy() {}

const std::string	Enemy::getType(void) const	{ return (this->_sType); }
int					Enemy::getHP(void) const	{ return (this->_nHP); }

void				Enemy::takeDamage(int damage)
{
	if (this->_nHP < 0)
		return ;

	damage = std::min(damage, this->_nHP);
	this->_nHP -= damage;
}

Enemy&				Enemy::operator=(Enemy const& src)
{
	this->_sType = src._sType;
	this->_nHP = src._nHP;
	return (*this);
}
