/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:48:30 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/08 19:19:13 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"  
	
MateriaSource::MateriaSource() : _count(0)
{
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource()							{ destroyMaterias(); }

void			MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_count == 4)
		return ;

	this->_materias[this->_count] = materia;
	this->_count++;
}

AMateria*		MateriaSource::createMateria(std::string const& type)
{
	int	i = this->_count - 1;
	
	while (i >= 0 && this->_materias[i]->getType() != type)
		i--;
	if (i < 0)
		return (NULL);
	return (this->_materias[i]->clone());
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& src)
{
	destroyMaterias();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
	}
	this->_count = src._count;
	return (*this);
}

void			MateriaSource::destroyMaterias(void)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	this->_count = 0;
}

