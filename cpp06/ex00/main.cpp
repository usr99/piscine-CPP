/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:03:37 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 21:05:22 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar_conversion.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "bad args." << std::endl;
		return (-1);
	}
	return (convert_string(av[1]));
}
