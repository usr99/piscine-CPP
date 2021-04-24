/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:04:28 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 19:23:10 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "AssaultTerminator.hpp"  

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}

AssaultTerminator::~AssaultTerminator() { std::cout << "I’ll be back..." << std::endl; }

ISpaceMarine*		AssaultTerminator::clone() const { return (new AssaultTerminator); }

void				AssaultTerminator::battleCry() const { std::cout << "This code is unclean. PURIFY IT!" << std::endl; }

void				AssaultTerminator::rangedAttack() const { std::cout << "* does nothing *" << std::endl; }

void				AssaultTerminator::meleeAttack() const { std::cout << "* attacks with chainfists *" << std::endl; }

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const& src) { return (*this); }
