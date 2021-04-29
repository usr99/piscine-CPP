/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:48:15 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/29 03:22:07 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() {}

void		Contact::show_contact_info(void)
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

std::string	Contact::get_first_name(void) const				{ return (this->first_name); }
std::string	Contact::get_last_name(void) const				{ return (this->last_name); }
std::string	Contact::get_nickname(void) const				{ return (this->nickname); }
std::string	Contact::get_login(void) const					{ return (this->login); }
std::string	Contact::get_postal_address(void) const			{ return (this->postal_address); }
std::string	Contact::get_email_address(void) const			{ return (this->email_address); }
std::string	Contact::get_phone_number(void) const			{ return (this->phone_number); }
std::string	Contact::get_birthday(void) const				{ return (this->birthday); }
std::string	Contact::get_favorite_meal(void) const			{ return (this->favorite_meal); }
std::string	Contact::get_underwear_color(void) const		{ return (this->underwear_color); }
std::string	Contact::get_darkest_secret(void) const			{ return (this->darkest_secret); }
void		Contact::set_first_name(std::string str)		{ this->first_name = str; }
void		Contact::set_last_name(std::string str)			{ this->last_name = str; }
void		Contact::set_nickname(std::string str)			{ this->nickname = str; }
void		Contact::set_login(std::string str)				{ this->login = str; }
void		Contact::set_postal_address(std::string str)	{ this->postal_address = str; }
void		Contact::set_email_address(std::string str)		{ this->email_address = str; }
void		Contact::set_phone_number(std::string str)		{ this->phone_number = str; }
void		Contact::set_birthday(std::string str)			{ this->birthday = str; }
void		Contact::set_favorite_meal(std::string str)		{ this->favorite_meal = str; }
void		Contact::set_underwear_color(std::string str)	{ this->underwear_color = str; }
void		Contact::set_darkest_secret(std::string str)	{ this->darkest_secret = str; }