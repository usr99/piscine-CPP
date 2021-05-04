/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:34:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 17:34:56 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar_conversion.hpp"

bool	isAlpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (true);
	return (false);
}

bool	isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

bool	isPrintable(char c)
{
	if (c >= 32 && c != 127)
		return (true);
	return (false);
}
