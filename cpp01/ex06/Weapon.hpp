/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:50:32 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 18:21:02 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:

		Weapon(std::string type);
		~Weapon();

		std::string const	getType(void) const;
		void				setType(std::string type);

	private:

		std::string	_sType;
};

#endif
