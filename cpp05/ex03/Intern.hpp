/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 01:38:31 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 04:45:54 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
	
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		virtual ~Intern();

		Form*			makeForm(std::string form, std::string target);

	private:

		Form*			(Intern::*forms[3])(std::string);
		std::string		names[3];

		Form*			makeShrubberyCreationForm(std::string target);
		Form*			makeRobotomyRequestForm(std::string target);
		Form*			makePresidentialPardonForm(std::string target);
};

#endif