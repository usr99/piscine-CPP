/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 03:25:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 13:59:17 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("numéro 0x000001");
	ScavTrap	scav("numéro 0x000002");

	/* ***  TEST FRAGTRAP *** */

	frag.meleeAttack("un ennemi random");
	frag.rangedAttack("Zangdar le sorcier");

	std::cout << frag.getHitPoints() << "HP" << std::endl;
	frag.takeDamage(120);
	std::cout << frag.getHitPoints() << "HP" << std::endl;
	frag.beRepaired(300);
	std::cout << frag.getHitPoints() << "HP" << std::endl;

	frag.vaulthunter_dot_exe("Uther le Porteur de Lumière");
	frag.vaulthunter_dot_exe("l'aubergiste");
	frag.vaulthunter_dot_exe("Cthulhu");
	frag.vaulthunter_dot_exe("Bob l'éponge");
	frag.vaulthunter_dot_exe("Scooby-Doo");

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
