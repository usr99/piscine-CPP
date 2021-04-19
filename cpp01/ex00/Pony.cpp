/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:57:57 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 17:56:19 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {}

Pony::Pony(int height, int weight, int max_speed, int age, std::string coat, std::string pattern)
{
	_height		= height;
	_weight		= weight;
	_max_speed	= max_speed;
	_age		= age;
	_coat		= coat;
	_pattern	= pattern;
}

Pony::~Pony()
{
	std::cout << "bye bye pony... <3" << std::endl;
}

void Pony::do_things()
{
	int	obstacle;

	// Introduce Pony
	std::cout << "Welcome Pony !!" << std::endl;
	show_pony_stats();
	// PonyOnTheStack jumps !!!
	std::cout << "Pony tries to jump an obstacle !!" << std::endl;
	std::cout << "height ? ";
	std::cin >> obstacle;
	// Success ?
	if (jump(obstacle) == true)
		std::cout << "and he succeed !!! AMAZING !!! " << std::endl;
	else
		std::cout << "and he fails... poor poney..." << std::endl;
	// Pony whinny
	whinny();
}


void Pony::show_pony_stats()
{
	std::cout << "height = " << _height << "m." << std::endl;
	std::cout << "weight = " << _weight << "kg." << std::endl;
	std::cout << "max_speed = " << _max_speed << "km/h." << std::endl;
	std::cout << "age = " << _age << "yo." << std::endl;
	std::cout << "coat = " << _coat << std::endl;
	std::cout << "pattern = " << _pattern << std::endl;
}

void Pony::whinny()
{
	std::cout << "** HUUUUUUUUUUUUUUUUUUUUUUUHIIIII **" << std::endl;
}

bool Pony::jump(int height_to_jump)
{
	if (height_to_jump < _height / 2)
		return (true);
	else
		return (false);
}
