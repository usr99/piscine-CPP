/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:46:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 21:56:33 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	highest("Sam", 2);
	Bureaucrat	lowest("Rob", 149);

	std::cout << highest << lowest;
	highest.increaseGrade();
	lowest.decreaseGrade();
	std::cout << highest << lowest;

	try
	{
		highest.increaseGrade();
	}
	catch(std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		lowest.decreaseGrade();
	}
	catch(std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
