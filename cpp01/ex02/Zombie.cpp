/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:00:08 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 19:39:16 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {}

void	Zombie::announce()
{
	std::cout << '<' << _name << " (" << _type << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
}
