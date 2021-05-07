/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 15:06:32 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/05 20:11:53 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

template<typename T>
bool	easyfind(T source, int toFind)
{
	if (find(source.begin(), source.end(), toFind) == source.end())
		return (false);
	return (true);
}

#endif
