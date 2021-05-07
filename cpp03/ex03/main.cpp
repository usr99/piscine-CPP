/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 03:25:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 19:52:12 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int	main(void)
{
	FragTrap	frag("numéro 0x000001");
	ScavTrap	scav("numéro 0x000002");
	NinjaTrap	ninja("shinobi");
	ClapTrap	clap("typical Claptrap");

	/* ***  TEST NINJATRAP *** */

	std::cout << "\033[34;01m" << "***  TEST NINJATRAP ***" << "\033[00m" << std::endl;

	std::cout << ninja.getHitPoints() << "HP" << std::endl;
	ninja.takeDamage(120);
	std::cout << ninja.getHitPoints() << "HP" << std::endl;
	ninja.beRepaired(300);
	std::cout << ninja.getHitPoints() << "HP" << std::endl;

	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap);

	return (0);
}
