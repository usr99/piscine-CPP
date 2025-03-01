/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 03:25:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 20:20:54 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	NinjaTrap	ninja("shinobi");
	SuperTrap	super("shoebox");

	/* ***  TEST SUPERTRAP *** */

	std::cout << "\033[34;01m" << "***  TEST SUPERTRAP ***" << "\033[00m" << std::endl;

	super.meleeAttack("un ennemi random");
	super.rangedAttack("Zangdar le sorcier");

	std::cout << super.getHitPoints() << "HP" << std::endl;
	super.takeDamage(120);
	std::cout << super.getHitPoints() << "HP" << std::endl;
	super.beRepaired(300);
	std::cout << super.getHitPoints() << "HP" << std::endl;

	super.ninjaShoebox(ninja);
	super.vaulthunter_dot_exe("le correcteur");

	return (0);
}
