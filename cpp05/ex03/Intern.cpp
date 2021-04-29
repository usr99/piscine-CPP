/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 01:44:45 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 04:51:25 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Intern.hpp"  

Intern::Intern()
{
	forms[0] = &Intern::makeShrubberyCreationForm;
	forms[1] = &Intern::makeRobotomyRequestForm;
	forms[2] = &Intern::makePresidentialPardonForm;

	names[0] = "shrubbery creation";
	names[1] = "robotomy request";
	names[2] = "presidential pardon";
}
	
Intern::~Intern() {}

Form*	Intern::makeForm(std::string form, std::string target)
{
	for (int i = 0 ; i < 3 ; i++)
	{
		if (form.compare(names[i]) == 0)
		{
			std::cout << "Intern creates " << form << std::endl;
			return ((this->*forms[i])(target));
		}
	}
	std::cout << "Sorry, " << form << " isn't a valid form." << std::endl;
	return (NULL);
}

Form* Intern::makeShrubberyCreationForm(std::string target)		{ return (new ShrubberyCreationForm(target)); }
Form* Intern::makeRobotomyRequestForm(std::string target)		{ return (new RobotomyRequestForm(target)); }
Form* Intern::makePresidentialPardonForm(std::string target)	{ return (new PresidentialPardonForm(target)); }
