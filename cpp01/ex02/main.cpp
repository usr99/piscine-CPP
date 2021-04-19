/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:14:20 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 19:51:50 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	zmbEvent;
	Zombie		*zombie1;
	Zombie		*zombie2;
	
	std::cout << "\033[34;01m" << "Let's create a Crawler named GlougGlou" << "\033[00m" << std::endl;
	zmbEvent.setZombieType("Crawler");
	zombie1 = zmbEvent.newZombie("GlouGlou");
	zombie1->announce();

	std::cout << "\033[34;01m" << "Let's create a Howler named MiamMiam" << "\033[00m" << std::endl;
	zmbEvent.setZombieType("Howler");
	zombie2 = zmbEvent.newZombie("MiamMiam");
	zombie2->announce();

	std::cout << "\033[34;01m" << "Let's create some chumps" << "\033[00m" << std::endl;
	zmbEvent.setZombieType("Chump");
	zmbEvent.randomChump();
	zmbEvent.randomChump();
	zmbEvent.randomChump();

	delete zombie1;
	delete zombie2;

	return (0);
}
