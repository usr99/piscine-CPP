/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:35:03 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 19:01:50 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar_conversion.hpp"

bool	isChar(std::string str)
{
	if (str.length() == 1 && !isDigit(str.at(str.length() - 1)))
		return (true);
	return (false);
}

bool	isInteger(std::string str)
{
	if (isValidNumber(str, str.length()))
		return (true);
	return (false);
}

bool	isFloat(std::string str)
{
	size_t	dotPosition;

	dotPosition = str.find_first_of('.');
	if (dotPosition == std::string::npos || dotPosition != str.find_last_of('.'))
		return (false);

	if (!isValidNumber(str, str.length() - 1, dotPosition))
		return (false);

	if (str.at(str.length() - 1) != 'f')
		return (false);

	return (true);
}

bool	isDouble(std::string str)
{
	size_t	dotPosition;

	dotPosition = str.find_first_of('.');
	if (dotPosition == std::string::npos || dotPosition != str.find_last_of('.'))
		return (false);

	if (!isValidNumber(str, str.length(), dotPosition))
		return (false);

	return (true);
}

int		isSpecialValue(std::string str)
{
	if (str.at(0) == '-' || str.at(0) == '+')
	{
		if (str.compare(1, 3, "inf") == 0)
		{
			if (str.length() == 4)
				return (RET_SPECIALVALUE_DOUBLE);
			else if (str.length() == 5 && str.at(4) == 'f')
				return (RET_SPECIALVALUE_FLOAT);
		}
	}
	else if (str.compare(0, 3, "nan") == 0)
	{
		if (str.length() == 3)
			return (RET_SPECIALVALUE_DOUBLE);
		else if (str.length() == 4 && str.at(3) == 'f')
			return (RET_SPECIALVALUE_FLOAT);
	}
	return (0);
}

bool	isValidNumber(std::string str, size_t length, size_t dot)
{
	size_t	i = 0;

	if (str.at(i) == '-')
		i++;
	while (i < length)
	{
		if (i != dot && !isDigit(str.at(i)))
			return (false);
		i++;
	}
	return (true);
}
