/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 03:06:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/26 13:30:03 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
	
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		virtual ~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const& executor) const;

	private:

		PresidentialPardonForm();
};
#endif