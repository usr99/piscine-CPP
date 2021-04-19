/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:59:24 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 18:01:20 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(int height, int weight, int max_speed, int age, std::string coat, std::string pattern)
{
	Pony	pony(height, weight, max_speed, age, coat, pattern);

	std::cout << "\033[34m";
	pony.do_things();
	std::cout << "\033[00m";
}

void	ponyOnTheHeap(int height, int weight, int max_speed, int age, std::string coat, std::string pattern)
{
	Pony	*pony = new Pony(height, weight, max_speed, age, coat, pattern);

	std::cout << "\033[31m";
	pony->do_things();
	std::cout << "\033[00m";

	delete pony;
}

int		main(void)
{
	std::cout << "\033[01m" << "-- PonyOnTheStack --" << std::endl;
	ponyOnTheStack(132, 160, 25, 12, "black", "regular");

	std::cout << "\033[01m" << "-- PonyOnTheHeap --" << std::endl;
	ponyOnTheHeap(148, 200, 40, 25, "appaloosa", "leopard");

	return (0);
}
