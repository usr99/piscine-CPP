/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:12:14 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/25 01:48:54 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"  
	
Form::Form() : _signGrade(150), _execGrade(150) {}

Form::Form(std::string name, int signingGrade, int executionGrade) :
_name(name), _isSigned(false), _signGrade(signingGrade), _execGrade(executionGrade)
{
	if (signingGrade < 1)
		throw GradeTooHighException();
	if (signingGrade > 150)
		throw GradeTooLowException();
		
	if (signingGrade < 1)
		throw GradeTooHighException();
	if (signingGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const& src) :
_name(src._name), _isSigned(src._isSigned), _signGrade(src._signGrade), _execGrade(src._execGrade)
{}

Form::~Form() {}

void				Form::beSigned(Bureaucrat const& bur)
{
	if (this->_signGrade < bur.getGrade())
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::string const	Form::getName(void) const				{ return (this->_name); }
int					Form::getSigningGrade(void) const		{ return (this->_signGrade); }
int					Form::getExecutionGrade(void) const		{ return (this->_execGrade); }
bool				Form::isSigned(void) const				{ return (this->_isSigned); }

Form&				Form::operator=(Form const& src)
{
	this->_isSigned = src._isSigned;
	return (*this);
}

std::ostream&		operator<<(std::ostream& output, Form const& form)
{
	output << "Form \"" << form.getName() << "\"" << std::endl;
	output << "Signed ? ";
	if (form.isSigned())
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	output << "Grade required to sign : " << form.getSigningGrade() << std::endl;
	output << "Grade required to execute : " << form.getExecutionGrade() << std::endl;
	return (output);
}