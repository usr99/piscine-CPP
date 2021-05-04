/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar_conversion.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:32:53 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 21:38:24 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

# include <iostream>
# include <climits>
# include <cstdlib>
# include <cmath>

# define RET_SPECIALVALUE_DOUBLE	1
# define RET_SPECIALVALUE_FLOAT		2
# define FLT_MAX					9.22337e+18F

bool	isAlpha(char c);
bool	isDigit(char c);
bool	isPrintable(char c);

bool	isChar(std::string str);
bool	isInteger(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);
int		isSpecialValue(std::string str);
bool	isValidNumber(std::string str, size_t length, size_t dot = -1);

int		convert_string(std::string str);
void	print_conversion(long val);
void	print_conversion(double val);
void	print_special_values(std::string str, int type);
void	print_char(long ln);
void	print_int(long ln);
void	print_float(double d);
void	print_double(double d);

#endif
