/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 22:12:16 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/25 01:52:11 by mamartin         ###   ########.fr       */
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

		Form(std::string name, int signingGrade, int executionGrade);
		Form(Form const& src);
		virtual ~Form();

		void				beSigned(Bureaucrat const& bur);
		std::string const	getName(void) const;
		int					getSigningGrade(void) const;
		int					getExecutionGrade(void) const;
		bool				isSigned(void) const;
		
		Form&				operator=(Form const& src);
	
	private:

		Form();

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
};

std::ostream&				operator<<(std::ostream& output, Form const& form);

#endif