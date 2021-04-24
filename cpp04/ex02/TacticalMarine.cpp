/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:04:28 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:30:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "TacticalMarine.hpp"  

TacticalMarine::TacticalMarine() { std::cout << "Tactical Marine ready for battle!" << std::endl; }

TacticalMarine::TacticalMarine(TacticalMarine const& src) 
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = src;
}

TacticalMarine::~TacticalMarine() { std::cout << "Aaargh..." << std::endl; }

ISpaceMarine*	TacticalMarine::clone() const { return (new TacticalMarine); }

void			TacticalMarine::battleCry() const { std::cout << "For the holy PLOT!" << std::endl; }

void			TacticalMarine::rangedAttack() const { std::cout << "* attacks with a bolter *" << std::endl; }

void			TacticalMarine::meleeAttack() const { std::cout << "* attacks with a chainsword *" << std::endl; }

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const& src) { return (*this); }
