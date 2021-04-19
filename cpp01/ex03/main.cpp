/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 04:38:09 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 04:51:28 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int	main(void)
{
	std::cout << "Building a 13 zombies horde..." << std::endl;
	std::cout << "\033[35m";
	ZombieHorde	horde1(13);
	horde1.announce();

	std::cout << "\033[00m";
	std::cout << "Building a 6 zombies horde..." << std::endl;
	std::cout << "\033[33m";
	ZombieHorde	horde2(6);
	horde2.announce();

	std::cout << "\033[00m";

	return (0);
}
