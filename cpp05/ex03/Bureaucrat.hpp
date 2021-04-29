/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:36:26 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/25 02:35:06 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
	
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat  
{
	public:

		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& src);
		virtual ~Bureaucrat();

		void				executeForm(Form const& form);
		void				signForm(Form& form) const;
		void				increaseGrade(void);
		void				decreaseGrade(void);
		std::string const	getName(void) const;
		int					getGrade(void) const;

		Bureaucrat&			operator=(Bureaucrat const& src);

	private:

		Bureaucrat();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw() { return ("Grade cannot be higher than 1"); }
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw() { return ("Grade cannot be lower than 150"); }
		};

		std::string const	_name;
		int					_grade;
};

std::ostream&				operator<<(std::ostream& output, Bureaucrat const& bur);

#endif