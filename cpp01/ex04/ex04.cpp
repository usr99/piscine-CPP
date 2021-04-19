/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 04:55:01 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 04:58:08 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	ptrToStr = &str;
	std::string&	refToStr = str;

	std::cout << "Pointer : " << *ptrToStr << std::endl;
	std::cout << "Reference : " << refToStr << std::endl;

	return (0);
}
