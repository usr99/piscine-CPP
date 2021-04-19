/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:11:23 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/17 21:42:29 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook();

		void	add_contact(void);
		void	search_contact(void);

	private:

		void	print_list_all(void);
		void	print_list_line(void);
		void	print_list_contact(int index);
		void	print_list_field(std::string str);

		Contact	_tab_contacts[8];
		int		_nb_contacts;

};

#endif