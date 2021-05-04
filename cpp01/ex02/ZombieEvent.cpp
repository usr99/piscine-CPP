/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:39:06 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 04:16:50 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	_names[0] = "Akala Volo";
	_names[1] = "Zog Zog";
	_names[2] = "Burp";
	_type = "none";
	srand(time(NULL));
}

void 		ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie 		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie(name, _type);
	return (newZombie);
}

void		ZombieEvent::randomChump()
{
	int	randNameId;

	randNameId = std::rand() % 3;
	
	Zombie zombie(_names[randNameId], _type);
	zombie.announce();
}
