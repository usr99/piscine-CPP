/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:49:50 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 21:58:48 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"  
	
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)				{ *this = src; }

Bureaucrat::~Bureaucrat() {}

void				Bureaucrat::increaseGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void				Bureaucrat::decreaseGrade(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::string const	Bureaucrat::getName(void) const		{ return (this->_name); }
int					Bureaucrat::getGrade(void) const	{ return (this->_grade); }

Bureaucrat&			Bureaucrat::operator=(Bureaucrat const& src)
{
	this->_grade = src._grade;
	return (*this);
}

std::ostream&		operator<<(std::ostream& output, Bureaucrat const& bur)
{
	output << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return (output);
}
