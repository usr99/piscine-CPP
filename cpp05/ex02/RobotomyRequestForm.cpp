/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:52:19 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/08 03:07:17 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"  
	
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	Form::checkIfExecutable(executor);
	std::cout << "* zzzzzZVVVVVVzz... zzzzzZVVVVVVzz... *" << std::endl;
	std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src) 
{
	this->_isSigned = src._isSigned;
	this->_target = src._target;
	return (*this);
}
