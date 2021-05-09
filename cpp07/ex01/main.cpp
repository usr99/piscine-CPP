/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:39 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 13:52:40 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cmath>
#include "iter.hpp"

void	print(const std::string& str)
{
	std::cout << str << std::endl;
}

template<typename T>
void	temPrint(const T& elem)
{
	std::cout << elem << std::endl;
}

int		main(void)
{
	// char* array
	std::string	array0[2] = {"salut", "bonjour"};
	::iter(array0, 2, &print);

	// int array
	int		array1[5] = {4, 144, 25, 16, 400};
	::iter(array1, 5, &temPrint<int>);

	// float array
	float	array2[4] = {42.42f, 1.234f, 71.17f, 2.10f};
	::iter(array2, 4, &temPrint<float>);

	return (0);
}