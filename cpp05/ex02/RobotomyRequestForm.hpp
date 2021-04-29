/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 03:06:22 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/26 13:30:10 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
	
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		virtual ~RobotomyRequestForm();

		virtual void	execute(Bureaucrat const& executor) const;

	private:

		RobotomyRequestForm();
};

#endif