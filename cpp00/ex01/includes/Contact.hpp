/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:16:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/29 03:23:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
	public:

		Contact();
		void		show_contact_info(void);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_login(void) const;
		std::string	get_postal_address(void) const;
		std::string	get_email_address(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_birthday(void) const;
		std::string	get_favorite_meal(void) const;
		std::string	get_underwear_color(void) const;
		std::string	get_darkest_secret(void) const;
		void		set_first_name(std::string);
		void		set_last_name(std::string);
		void		set_nickname(std::string);
		void		set_login(std::string);
		void		set_postal_address(std::string);
		void		set_email_address(std::string);
		void		set_phone_number(std::string);
		void		set_birthday(std::string);
		void		set_favorite_meal(std::string);
		void		set_underwear_color(std::string);
		void		set_darkest_secret(std::string);
	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	login;
		std::string	postal_address;
		std::string	email_address;
		std::string	phone_number;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
};

#endif
