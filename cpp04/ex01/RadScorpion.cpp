/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:14:41 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:21:05 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"  

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") { std::cout << "* click click click *" << std::endl; }

RadScorpion::~RadScorpion() { std::cout << "* SPROTCH *" << std::endl; }
