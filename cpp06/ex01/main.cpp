/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 22:13:05 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 12:35:06 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

typedef struct	Data
{
	std::string	s1;
	int			n;
	std::string	s2;
}				Data;

void * serialize(void)
{
	std::string	alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	char		*raw = new char[20];

	// seed for random generation
	std::srand(time(NULL));

	// first string generation
	for (int i = 0 ; i < 8 ; i++)
		raw[i] = alphabet[std::rand() % 62];
	// second string
	for (int i = 12 ; i < 20 ; i++)
		raw[i] = alphabet[std::rand() % 62];
	// integer
	reinterpret_cast<int*>(raw)[2] = std::rand();
	
	return (reinterpret_cast<void*>(raw));
}

Data * deserialize(void * raw)
{
	Data	*data = new Data;

	data->s1.assign(reinterpret_cast<char*>(raw), 8);		// address
	data->n = *reinterpret_cast<int*>(raw) + 2;				// address + sizeof(int) * 2
	data->s2.assign(reinterpret_cast<char*>(raw) + 12, 8);	// address + sizeof(char) * 12

	return (data);
}

int	main(void)
{
	void	*raw = serialize();
	Data	*data = deserialize(raw);

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;

	delete data;
	delete [] reinterpret_cast<char*>(raw);

	return (0);
}