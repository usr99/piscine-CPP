/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:20:34 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 14:29:26 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<char>			empty;
	Array<float>		fl(4);
	Array<std::string>	str(2);
	Array<int>			integer(3);

	std::cout << "empty array size: " << empty.size() << std::endl;

	fl[0] = 42.42f;
	fl[1] = 1.234f;
	fl[2] = 71.17f;
	fl[3] = 53.22f;
	std::cout << "float array size: " << fl.size() << std::endl;

	str[0] = "salut";
	str[1] = "toi";
	std::cout << "string array size: " << str.size() << std::endl;

	integer[0] = 1;
	integer[1] = 2;
	integer[2] = 3;
	std::cout << "int array size: " << integer.size() << std::endl;
	
	// Out of range exception
	try { integer[3] = 0; }
	catch(std::exception& e) { std::cout << e.what() << std::endl; }

	// Copy constructor
	Array<int>			copy(integer);
	std::cout << "int array size: " << copy.size() << std::endl;
	std::cout << copy[0] << std::endl;
	std::cout << copy[1] << std::endl;
	std::cout << copy[2] << std::endl;

	return (0);
}
