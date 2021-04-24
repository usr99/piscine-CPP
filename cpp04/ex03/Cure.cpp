/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:52:00 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:55:40 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"  
	
Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure*	Cure::clone(void) const
{
	Cure*	ptr = new Cure;

	*ptr = *this;
	return (ptr);
}

void	Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
