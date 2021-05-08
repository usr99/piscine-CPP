/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:52:16 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/08 03:07:01 by mamartin         ###   ########.fr       */
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

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src) 
{
	this->_isSigned = src._isSigned;
	this->_target = src._target;
	return (*this);
}