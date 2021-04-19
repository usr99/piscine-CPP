/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:33:59 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 05:40:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(Brain& brain) : _brain(brain) {}

Human::~Human() {}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain&		Human::getBrain(void) const
{
	return (this->_brain);
}
