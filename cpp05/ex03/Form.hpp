/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:12:16 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/27 00:31:37 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
	
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form  
{
	public:

		Form(std::string name, int signingGrade, int executionGrade, std::string target);
		Form(Form const& src);
		virtual ~Form();

		virtual void		execute(Bureaucrat const& executor) const = 0;
		void				beSigned(Bureaucrat const& bur);
		std::string const	getName(void) const;
		int					getSigningGrade(void) const;
		int					getExecutionGrade(void) const;
		bool				isSigned(void) const;
		std::string			getTarget(void) const;

		Form&				operator=(Form const& src);
	
	protected:

		void				checkIfExecutable(Bureaucrat const& executor) const;

	private:

		Form();

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char*	what(void) const throw() { return ("form is not signed"); }
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw() { return ("bureaucrat's grade is too high"); }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw() { return ("bureaucrat's grade is too low"); }
		};

		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
		std::string			_target;
};

std::ostream&				operator<<(std::ostream& output, Form const& form);

#endif