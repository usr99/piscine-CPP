/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:35:55 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 19:21:10 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	public:

		ZombieEvent();
		
		void 		setZombieType(std::string type);
		Zombie 		*newZombie(std::string name);
		void		randomChump();

	private:

		std::string	_names[3];
		std::string	_type;
};

#endif
