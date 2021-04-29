/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:46:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 04:47:42 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				penBur("Bureaucrat with a pen", 25);
	Bureaucrat				shrubBur("tree lover", 137);
	Bureaucrat				robotBur("T3L0K", 45);
	Bureaucrat				pardonBur("President", 5);
	
	ShrubberyCreationForm	shrubForm("trees");
	RobotomyRequestForm		robotForm("cute little rabbit");
	PresidentialPardonForm	pardonForm("Garrosh Hellscream");

	std::cout << "\033[33;01m" << "-- ShrubberyCreationForm --" << "\033[00m" << std::endl;

	shrubBur.executeForm(shrubForm);
	penBur.signForm(shrubForm);
	shrubBur.executeForm(shrubForm);

	std::cout << "\033[33;01m" << "-- RobotomyRequestForm --" << "\033[00m" << std::endl;

	shrubBur.executeForm(robotForm);
	penBur.signForm(robotForm);
	shrubBur.executeForm(robotForm);
	robotBur.executeForm(robotForm);
	
	std::cout << "\033[33;01m" << "-- PresidentialPardonForm --" << "\033[00m" << std::endl;

	robotBur.executeForm(pardonForm);
	penBur.signForm(pardonForm);
	robotBur.executeForm(pardonForm);
	pardonBur.executeForm(pardonForm);

	return (0);
}
