/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ashbringer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:48:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:03:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ashbringer.hpp"  
	
Ashbringer::Ashbringer() : AWeapon("Ashbringer", 40, 250) {}
	
Ashbringer::~Ashbringer() {}

void	Ashbringer::attack(void) const { std::cout << "* dazzling sparkle *" << std::endl; }
