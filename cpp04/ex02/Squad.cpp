/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:39:05 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:13:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  
#include "Squad.hpp"  
	
Squad::Squad() : _squad(NULL), _nCount(0) {}
	
Squad::Squad(Squad const& src) { *this = src; }

Squad::~Squad()
{
	t_squad*	lst;
	t_squad*	tmp;

	lst = this->_squad;
	while (lst)
	{
		tmp = lst->next;
		delete lst->unit;
		delete lst;
		lst = tmp;
	}
}

int				Squad::getCount(void) const
{
	return (this->_nCount);
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	t_squad*	lst;

	if (index < 0 || index >= this->_nCount)
		return (NULL);

	lst = this->_squad;
	for (int i = 0 ; i < index ; i++)
		lst = lst->next;

	return (lst->unit);
}

int				Squad::push(ISpaceMarine* unit)
{
	t_squad*	lst;
	t_squad*	newUnit;
	
	if (!unit)
		return (this->_nCount);

	if (this->_squad)
	{
		lst = this->_squad;
		while (lst->next)
		{
			if (lst->unit == unit)
				return (this->_nCount);
			lst = lst->next;
		}
		if (lst->unit == unit)
			return (this->_nCount);
	}
	
	newUnit = new t_squad;
	newUnit->unit = unit;
	newUnit->next = NULL;

	if (this->_squad)
		lst->next = newUnit;
	else
		this->_squad = newUnit;

	this->_nCount++;
	return (this->_nCount);
}

Squad&			Squad::operator=(Squad const& src)
{
	t_squad*	lstSrc;
	t_squad*	lstDst;
	t_squad*	tmp;

	while (this->_squad)
	{
		tmp = this->_squad->next;
		delete this->_squad->unit;
		delete this->_squad;
		this->_squad = tmp;
	}

	lstDst = src._squad;
	while (lstDst)
	{
		lstSrc = new t_squad;
		lstSrc->unit = lstDst->unit->clone();
		lstSrc->next = NULL;

		if (!this->_squad)
			this->_squad = lstSrc;
		else
			tmp->next = lstSrc;

		tmp = lstSrc;
		lstDst = lstDst->next;
	}
	this->_nCount = src._nCount;

	return (*this);
}
