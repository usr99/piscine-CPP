/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:30:11 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/17 22:38:20 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
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

	std::cout << "\033[33;01m";
	std::cout << "First Name: ";
	std::cin >> _tab_contacts[_nb_contacts].first_name;

	std::cout << "\033[32;01m";
	std::cout << "Last Name: ";
	std::cin >> _tab_contacts[_nb_contacts].last_name;

	std::cout << "\033[33;01m";
	std::cout << "Nickname: ";
	std::cin >> _tab_contacts[_nb_contacts].nickname;

	std::cout << "\033[32;01m";
	std::cout << "Login: ";
	std::cin >> _tab_contacts[_nb_contacts].login;

	std::cout << "\033[33;01m";
	std::cout << "Postal Address: ";
	std::cin >> _tab_contacts[_nb_contacts].postal_address;

	std::cout << "\033[32;01m";
	std::cout << "Email Address: ";
	std::cin >> _tab_contacts[_nb_contacts].email_address;

	std::cout << "\033[33;01m";
	std::cout << "Phone Number: ";
	std::cin >> _tab_contacts[_nb_contacts].phone_number;

	std::cout << "\033[32;01m";
	std::cout << "Birthday date: ";
	std::cin >> _tab_contacts[_nb_contacts].birthday;

	std::cout << "\033[33;01m";
	std::cout << "Favorite Meal: ";
	std::cin >> _tab_contacts[_nb_contacts].favorite_meal;

	std::cout << "\033[32;01m";
	std::cout << "Underwear Color: ";
	std::cin >> _tab_contacts[_nb_contacts].underwear_color;
	
	std::cout << "\033[33;01m";
	std::cout << "Darkest Secret: ";
	std::cin >> _tab_contacts[_nb_contacts].darkest_secret;

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
	std::cout << '|' << "     index" << '|' << "first name" << '|' << " last name" << '|' << "  nickname" << '|' << std::endl;
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
	std::cout << "         " << index;
	std::cout << '|';

	print_list_field(_tab_contacts[index].first_name);
	print_list_field(_tab_contacts[index].last_name);
	print_list_field(_tab_contacts[index].nickname);

	std::cout << std::endl;
	print_list_line();
}

void	Phonebook::print_list_field(std::string str)
{
	int	blanks;
	int	j;

	blanks = 10 - str.length();
	for (int i = 0; i < blanks; i++)
		std::cout << ' ';

	j = 0;
	while (j < 10 && str[j] != '\0')
	{
		if (j == 9 && str.length() > 10)
			std::cout << '.';
		else
			std::cout << str[j];
		j++;
	}
	std::cout << '|';
}
