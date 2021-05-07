/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:32:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/05 20:13:08 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int	main(void)
{

	/* LIST TESTS */

	std::list<int>	lst;

	lst.push_back(5);
	lst.push_back(11);
	lst.push_back(3);
	lst.push_back(19);

	std::cout << std::boolalpha << easyfind(lst, 5) << std::endl;
	std::cout << std::boolalpha << easyfind(lst, 11) << std::endl;
	std::cout << std::boolalpha << easyfind(lst, 3) << std::endl;
	std::cout << std::boolalpha << easyfind(lst, 19) << std::endl;
	std::cout << std::boolalpha << easyfind(lst, 21) << std::endl;

	/* VECTOR TESTS */

	std::vector<int>	vi;

	vi.push_back(77);
	vi.push_back(53);
	vi.push_back(37);
	vi.push_back(21);

	std::cout << std::endl;

	std::cout << std::boolalpha << easyfind(vi, 77) << std::endl;
	std::cout << std::boolalpha << easyfind(vi, 37) << std::endl;
	std::cout << std::boolalpha << easyfind(vi, 21) << std::endl;
	std::cout << std::boolalpha << easyfind(vi, 53) << std::endl;
	std::cout << std::boolalpha << easyfind(vi, 18) << std::endl;

	return (0);
}
