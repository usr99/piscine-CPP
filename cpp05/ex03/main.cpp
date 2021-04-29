/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:46:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 05:00:00 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Bureaucrat	bur("sam", 5);
	Form*		rrf;

	std::cout << "\033[33;01m" << "-- RobotomyRequestForm --" << "\033[00m" << std::endl;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	bur.signForm(*rrf);
	bur.executeForm(*rrf);

	std::cout << "\033[33;01m" << "-- PresidentialPardonForm --" << "\033[00m" << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "alligators");
	bur.signForm(*rrf);
	bur.executeForm(*rrf);

	std::cout << "\033[33;01m" << "-- ShrubberyCreationForm --" << "\033[00m" << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "trees valley");
	bur.signForm(*rrf);
	bur.executeForm(*rrf);

	std::cout << "\033[33;01m" << "-- Inexistant Form --" << "\033[00m" << std::endl;
	delete rrf;

	rrf = someRandomIntern.makeForm("google forms", "silicon valley");

	return (0);
}
