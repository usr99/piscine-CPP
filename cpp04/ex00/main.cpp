/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:25:21 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 03:08:45 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Murloc.hpp"

int main()
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Murloc		bourbie("Bourbie");
	
	std::cout << robert << jim << joe << bourbie;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bourbie);
	
	return (0);
}
