/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:24:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 15:47:52 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int	main(void)
{
	std::cout << std::endl << "--- Stack Tests ---" << std::endl << std::endl;
	
	MutantStack<int>	ms;

	ms.push(10);
	ms.push(25);
	ms.push(32);
	ms.push(22);

	MutantStack<int>	pp;

	std::cout << ms.top() << std::endl;
	pp = ms;
	std::cout << pp.top() << std::endl;
	std::cout << "size: " << pp.size() << std::endl;
	pp.pop();
	std::cout << pp.top() << std::endl;
	std::cout << "size: " << pp.size() << std::endl;

	std::cout << std::endl << "--- Iterators Tests ---" << std::endl << std::endl;

	MutantStack<int>::iterator	it = ms.begin();
	MutantStack<int>::iterator	ite = ms.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>	cc(ms);
	it = cc.end();
	std::cout << std::endl << "size: " << cc.size() << std::endl;
	while (--it >= cc.begin())
		std::cout << *it << std::endl;

	while (cc.empty() == false)
	{
		cc.pop();
		std::cout << "size: " << cc.size() << std::endl;
	}

	return (0);
}
