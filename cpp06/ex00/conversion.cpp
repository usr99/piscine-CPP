/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:35:45 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 21:35:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar_conversion.hpp"

int		convert_string(std::string str)
{
	long	ln;
	double	d;
	int		ret;

	if (isChar(str))
	{
		ln = str.at(0);
		print_conversion(ln);
	}
	else if (isInteger(str))
	{
		ln = strtol(str.data(), NULL, 0);
		print_conversion(ln);
	}
	else if (isFloat(str) || isDouble(str))
	{
		d = strtod(str.data(), NULL);
		print_conversion(d);
	}
	else if ((ret = isSpecialValue(str)) != 0)
		print_special_values(str, ret);
	else
	{
		std::cout << "Litteral value does not match any scalar types." << std::endl;
		return (-1);
	}
	return (0);
}

void	print_conversion(long val)
{
	print_char(val);
	print_int(val);
	print_float(static_cast<double>(val));
	print_double(static_cast<double>(val));
}

void	print_conversion(double val)
{
	print_char(static_cast<long>(val));
	print_int(static_cast<long>(val));
	print_float(val);
	print_double(val);
}

void	print_special_values(std::string str, int type)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (type == RET_SPECIALVALUE_FLOAT)
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.erase(str.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: " << str << 'f' << std::endl;
		std::cout << "double: " << str << std::endl;		
	}
}

void	print_char(long ln)
{
	char	c;

	c = static_cast<char>(ln);
	std::cout << "char: ";
	if (ln > CHAR_MAX || ln < CHAR_MIN)
		std::cout << "impossible" << std::endl;
	else if (isPrintable(c))
		std::cout << "\'" << c << "\'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	print_int(long ln)
{
	std::cout << "int: ";
	if (ln > INT_MAX || ln < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(ln) << std::endl;
}

void	print_float(double d)
{
	std::cout << "float: ";
	if (d < -FLT_MAX || d > FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << static_cast<float>(d);
		if (d == static_cast<int>(d))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void	print_double(double d)
{
	std::cout << "double: ";
	if (d < -FLT_MAX || d > FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << static_cast<double>(d);
		if (d == static_cast<int>(d))
			std::cout << ".0";
		std::cout << std::endl;
	}
}
