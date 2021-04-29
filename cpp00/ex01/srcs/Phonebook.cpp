/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:30:11 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/29 04:35:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iomanip>
#include "../includes/Phonebook.hpp"  

Phonebook::Phonebook()
{
	_nb_contacts = 0;
}

void	Phonebook::add_contact(void)
{
	if (_nb_contacts == 8)
	{
		std::cout << "SORRY ! Your Awesome PhoneBook is FULL." << std::endl;
		return ;
	}

	std::string	str;

	std::cout << "\033[33;01m";
	std::cout << "First Name: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_first_name(str);

	std::cout << "\033[32;01m";
	std::cout << "Last Name: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_last_name(str);

	std::cout << "\033[33;01m";
	std::cout << "Nickname: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_nickname(str);

	std::cout << "\033[32;01m";
	std::cout << "Login: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_login(str);

	std::cout << "\033[33;01m";
	std::cout << "Postal Address: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_postal_address(str);

	std::cout << "\033[32;01m";
	std::cout << "Email Address: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_email_address(str);

	std::cout << "\033[33;01m";
	std::cout << "Phone Number: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_phone_number(str);

	std::cout << "\033[32;01m";
	std::cout << "Birthday date: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_birthday(str);

	std::cout << "\033[33;01m";
	std::cout << "Favorite Meal: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_favorite_meal(str);

	std::cout << "\033[32;01m";
	std::cout << "Underwear Color: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_underwear_color(str);
	
	std::cout << "\033[33;01m";
	std::cout << "Darkest Secret: ";
	std::cin >> str;
	_tab_contacts[_nb_contacts].set_darkest_secret(str);

	std::cout << "\033[00m";

	_nb_contacts++;
}

void	Phonebook::search_contact(void)
{
	std::string	index;

	if (_nb_contacts == 0)
	{
		std::cout << "SORRY ! Your Awesome PhoneBook is EMPTY." << std::endl;
		return ;
	}

	print_list_all();
	std::cout << "Please specify contact's index : ";
	std::cin >> index;

	while (index.length() > 1 || index[0] < '0' || index[0] >= _nb_contacts + '0')
	{
		std::cout << "SORRY ! Bad index. Please retry (0-" << _nb_contacts - 1 << ") : ";
		std::cin >> index;
	}

	_tab_contacts[atoi(index.data())].show_contact_info();
}

void	Phonebook::print_list_all(void)
{
	std::cout << "\033[37;01m";
	print_list_line();
	std::cout << '|';
	std::cout << std::setw(10) << "index" << std::setw(0);
	std::cout << '|';
	std::cout << std::setw(10) << "first name" << std::setw(0);
	std::cout << '|';
	std::cout << std::setw(10) << "last name" << std::setw(0);
	std::cout << '|';
	std::cout << std::setw(10) << "nickname" << std::setw(0);
	std::cout << '|' << std::endl;
	print_list_line();
	for (int index = 0 ; index < _nb_contacts ; index++)
		print_list_contact(index);
	std::cout << "\033[00m";
}

void	Phonebook::print_list_line(void)
{
	for (int i = 0 ; i < 45 ; i++)
		std::cout << '-';
	std::cout << std::endl;
}

void	Phonebook::print_list_contact(int index)
{
	std::cout << '|';
	std::cout << std::setw(10) << index << std::setw(0);
	std::cout << '|';

	print_list_field(_tab_contacts[index].get_first_name());
	print_list_field(_tab_contacts[index].get_last_name());
	print_list_field(_tab_contacts[index].get_nickname());

	std::cout << std::endl;
	print_list_line();
}

void	Phonebook::print_list_field(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str << std::setw(0);
	else
	{
		str.resize(9);
		std::cout << str << '.';
	}
	std::cout << '|';
}
