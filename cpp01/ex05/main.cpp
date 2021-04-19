/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:14:47 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 05:42:01 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int	main(void)
{
	Brain	brain(true, true);
	Human	human(brain);

	std::cout << "brain.identify :\t\t" << brain.identify() << std::endl;
	std::cout << "human.identify :\t\t" << human.identify() << std::endl;
	std::cout << "human.getBrain.identify :\t" << human.getBrain().identify() << std::endl;

	return (0);
}
