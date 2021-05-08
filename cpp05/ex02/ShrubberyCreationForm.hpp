/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 02:48:53 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/08 03:08:08 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		virtual ~ShrubberyCreationForm();

		virtual void			execute(Bureaucrat const& executor) const;
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& src);
};

#endif