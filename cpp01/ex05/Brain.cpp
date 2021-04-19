/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:00:38 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 05:28:14 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain(bool big, bool smart): _bBigBrain(big), _bSmart(smart) {}

Brain::~Brain() {}

std::string Brain::identify(void) const
{
	std::ostringstream	stream;
	std::string			address;

	stream << this;
	address = stream.str();

	for (int i = 2 ; i < (int)address.length() ; i++)
			address[i] = std::toupper(address[i]);

	return (address);
}

void		Brain::showBrainInfo(void) const
{
	std::cout << "u big brain ? " << this->_bBigBrain << std::endl;
	std::cout << "u smart ? " << this->_bSmart << std::endl;
}
