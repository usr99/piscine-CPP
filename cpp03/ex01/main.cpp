/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 03:25:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 19:46:02 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("numéro 0x000002");

	/* ***  TEST SCAVTRAP *** */

	scav.meleeAttack("un ennemi random");
	scav.rangedAttack("Zangdar le sorcier");

	std::cout << scav.getHitPoints() << "HP" << std::endl;
	scav.takeDamage(120);
	std::cout << scav.getHitPoints() << "HP" << std::endl;
	scav.beRepaired(300);
	std::cout << scav.getHitPoints() << "HP" << std::endl;

	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();

	return (0);
}
