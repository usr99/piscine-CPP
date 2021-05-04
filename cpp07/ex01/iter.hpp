/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:25:13 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 17:28:38 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename T>
void	iter(T* array, int size, void (*f)(T const& element))
{
	for (int i = 0 ; i < size ; i++)
		(*f)(array[i]);
}

#endif
