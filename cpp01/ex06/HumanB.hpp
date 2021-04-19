/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:06:10 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 18:23:09 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMAN_B_H
# define HUMAN_B_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB();

		void				attack(void) const;
		void				setWeapon(Weapon& weapon);

	private:

		std::string			_sName;
		Weapon*				_ptrWeapon;
};

#endif