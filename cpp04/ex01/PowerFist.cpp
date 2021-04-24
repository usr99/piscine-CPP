/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:48:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:03:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"  
	
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}
	
PowerFist::~PowerFist() {}

void	PowerFist::attack(void) const { std::cout << "* pschhh... SBAM! *" << std::endl; }
