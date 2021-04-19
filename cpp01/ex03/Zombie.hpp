/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:17:43 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 04:43:59 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public:

		Zombie();
		Zombie(std::string name, std::string type);
		
		void		setName(std::string name);
		void		setType(std::string type);
		void		announce();

	private:

		std::string	_name;
		std::string	_type;
};

#endif
