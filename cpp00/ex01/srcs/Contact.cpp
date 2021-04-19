/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:48:15 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/17 22:40:20 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() {}

void	Contact::show_contact_info(void)
{
	std::cout << "\033[33;01m" << "First name: " << first_name << std::endl;
	std::cout << "\033[32;01m" << "Last name: " << last_name << std::endl;
	std::cout << "\033[33;01m" << "Nickname: " << nickname << std::endl;
	std::cout << "\033[32;01m" << "Login: " << login << std::endl;
	std::cout << "\033[33;01m" << "Postal address: " << postal_address << std::endl;
	std::cout << "\033[32;01m" << "Email address: " << email_address << std::endl;
	std::cout << "\033[33;01m" << "Phone number: " << phone_number << std::endl;
	std::cout << "\033[32;01m" << "Birthday: " << birthday << std::endl;
	std::cout << "\033[33;01m" << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "\033[32;01m" << "Underwear color: " << underwear_color << std::endl;
	std::cout << "\033[33;01m" << "Darkest secret: " << darkest_secret << std::endl;
	std::cout << "\033[00m";
}
