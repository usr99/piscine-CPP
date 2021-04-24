/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 03:25:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/22 18:05:17 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	//ClapTrap	clap("typical Claptrap");
	//FragTrap	frag("numéro 0x000001");
	//ScavTrap	scav("numéro 0x000002");
	//NinjaTrap	ninja("shinobi");
	SuperTrap	super("shoebox");
//
	///* ***  TEST FRAGTRAP *** */
//
	//std::cout << "\033[34;01m" << "***  TEST FRAGTRAP ***" << "\033[00m" << std::endl;
//
	//frag.meleeAttack("un ennemi random");
	//frag.rangedAttack("Zangdar le sorcier");
//
	//std::cout << frag.getHitPoints() << "HP" << std::endl;
	//frag.takeDamage(120);
	//std::cout << frag.getHitPoints() << "HP" << std::endl;
	//frag.beRepaired(300);
	//std::cout << frag.getHitPoints() << "HP" << std::endl;
//
	//frag.vaulthunter_dot_exe("Uther le Porteur de Lumière");
	//frag.vaulthunter_dot_exe("l'aubergiste");
	//frag.vaulthunter_dot_exe("Cthulhu");
	//frag.vaulthunter_dot_exe("Bob l'éponge");
	//frag.vaulthunter_dot_exe("Scooby-Doo");
//
	///* ***  TEST SCAVTRAP *** */
//
	//std::cout << "\033[34;01m" << "***  TEST SCAVTRAP ***" << "\033[00m" << std::endl;
//
	//scav.meleeAttack("un ennemi random");
	//scav.rangedAttack("Zangdar le sorcier");
//
	//std::cout << scav.getHitPoints() << "HP" << std::endl;
	//scav.takeDamage(120);
	//std::cout << scav.getHitPoints() << "HP" << std::endl;
	//scav.beRepaired(300);
	//std::cout << scav.getHitPoints() << "HP" << std::endl;
//
	//scav.challengeNewcomer();
	//scav.challengeNewcomer();
	//scav.challengeNewcomer();
//
	///* ***  TEST NINJATRAP *** */
//
	//std::cout << "\033[34;01m" << "***  TEST NINJATRAP ***" << "\033[00m" << std::endl;
//
	//std::cout << ninja.getHitPoints() << "HP" << std::endl;
	//ninja.takeDamage(120);
	//std::cout << ninja.getHitPoints() << "HP" << std::endl;
	//ninja.beRepaired(300);
	//std::cout << ninja.getHitPoints() << "HP" << std::endl;
//
	//ninja.ninjaShoebox(frag);
	//ninja.ninjaShoebox(scav);
	//ninja.ninjaShoebox(ninja);
	//ninja.ninjaShoebox(clap);

	/* ***  TEST SUPERTRAP *** */

	std::cout << "\033[34;01m" << "***  TEST SUPERTRAP ***" << "\033[00m" << std::endl;

	super.meleeAttack("un ennemi random");
	super.rangedAttack("Zangdar le sorcier");

	std::cout << super.getHitPoints() << "HP" << std::endl;
	super.takeDamage(120);
	std::cout << super.getHitPoints() << "HP" << std::endl;
	super.beRepaired(300);
	std::cout << super.getHitPoints() << "HP" << std::endl;

	//super.ninjaShoebox(frag);
	//super.ninjaShoebox(scav);
	//super.ninjaShoebox(ninja);
	//super.ninjaShoebox(clap);

	super.vaulthunter_dot_exe("le correcteur");

	return (0);
}
