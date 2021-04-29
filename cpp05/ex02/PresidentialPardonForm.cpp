/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:52:16 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 04:47:14 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"  
	
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	Form::checkIfExecutable(executor);
	std::cout << "Zafod Beeblebrox forgives " << this->getTarget() << std::endl;
}