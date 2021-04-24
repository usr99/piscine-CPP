/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LichKing.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:14:41 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:21:05 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LichKing.hpp"  

LichKing::LichKing() : Enemy(250, "Lich King") { std::cout << "\033[34m" << "Bow down." << "\033[00m" << std::endl; }

LichKing::~LichKing() { std::cout << "\033[34m" << "I see only darkness before me..." << "\033[00m" << std::endl; }

void			LichKing::takeDamage(int damage)
{
	if (this->_nHP < 0)
		return ;
	if (damage < 250)
	{
		std::cout << "\033[34m" << "You cannot defeat me !" << "\033[00m" << std::endl;
		return ;
	}
	this->_nHP = 0;
}
