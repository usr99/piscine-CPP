/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:48:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:03:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"  
	
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}
	
PlasmaRifle::~PlasmaRifle() {}

void	PlasmaRifle::attack(void) const { std::cout << "* piouuu piouuu piouuu *" << std::endl; }
