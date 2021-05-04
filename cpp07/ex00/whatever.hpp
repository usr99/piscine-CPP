/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:25:13 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 17:22:05 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void		swap(T& x, T& y)
{
	T	tmp = x;

	x = y;
	y = tmp;
}

template<typename T>
T const&	min(T& x, T& y)
{
	if (x < y)
		return (x);
	return (y);
} 

template<typename T>
T const&	max(T& x, T& y)
{
	if (x > y)
		return (x);
	return (y);
} 

#endif
