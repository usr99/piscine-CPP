/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:52:00 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:58:13 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"  
	
Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice*	Ice::clone(void) const
{
	Ice*	ptr = new Ice;

	*ptr = *this;
	return (ptr);
}

void	Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
