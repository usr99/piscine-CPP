/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Murloc.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:34:49 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 02:40:10 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Murloc.hpp"

Murloc::Murloc(std::string name) : Victim(name) { std::cout << "mrglwglwlg" << std::endl; }

Murloc::~Murloc() { std::cout << "gwrarlw..." << std::endl; }

void Murloc::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a murloc fin soup!" << std::endl;
}
