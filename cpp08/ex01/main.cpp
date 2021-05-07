/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 22:32:23 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/06 02:52:19 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <algorithm>

void print(int n) { std::cout << n << std::endl; }

int	main(void)
{
	span	test1(5);

	try
	{
		test1.addNumber(-5);
		test1.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	try
	{
		test1.addNumber(27);
		test1.addNumber(18);
		test1.addNumber(13);
		test1.addNumber(1);
		test1.addNumber(255);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << test1.shortestSpan() << std::endl;
	std::cout << test1.longestSpan() << std::endl;
	
	span				test2(10000);
	
	test2.addNumber(test2.end(), 72);
	
	std::cout << test2.shortestSpan() << std::endl;
	std::cout << test2.longestSpan() << std::endl;

	return (0);
}
