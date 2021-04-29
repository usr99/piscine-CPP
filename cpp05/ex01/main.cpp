/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:46:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/25 01:47:13 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bur("Sam", 51);
	Form		form("boring form", 50, 25);

	std::cout << bur << form << std::endl;
	bur.signForm(form);
	bur.increaseGrade();
	std::cout << bur;
	bur.signForm(form);
	std::cout << std::endl << form;

	return (0);
}
