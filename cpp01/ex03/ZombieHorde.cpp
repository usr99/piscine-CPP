/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 04:22:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 04:52:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _nZombies(n)
{
	std::string	possibleNames[3];
	int			nameIndex;

	possibleNames[0] = "Akala Volo";
	possibleNames[1] = "Zog Zog";
	possibleNames[2] = "Burp";

	this->_horde = new Zombie[n];

	for (int i = 0 ; i < n ; i++)
	{
		nameIndex = std::rand() % 3;

		this->_horde[i].setName(possibleNames[nameIndex]);
		this->_horde[i].setType("Typical Zombie");
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Destroying the horde..." << std::endl;
	delete [] this->_horde;
	std::cout << "Horde annihilated." << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0 ; i < this->_nZombies ; i++)
		this->_horde[i].announce();
}
