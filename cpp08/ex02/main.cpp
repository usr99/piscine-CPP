/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:24:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/06 23:05:31 by mamartin         ###   ########.fr       */
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
	pp.pop();
	std::cout << pp.top() << std::endl;

	std::cout << std::endl << "--- Iterators Tests ---" << std::endl << std::endl;

	MutantStack<int>::iterator	it = ms.begin();
	MutantStack<int>::iterator	ite = ms.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	return (0);
}
