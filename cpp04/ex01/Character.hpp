/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:38:42 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 05:22:28 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character  
{
	public:

		Character(std::string const& name);
		Character(Character const& src);
		virtual ~Character();

		void				recoverAP(void);
		void				equip(AWeapon* weapon);
		void				attack(Enemy* enemy);
		std::string const	getName(void) const;
		int					getAP(void) const;
		AWeapon*			getWeapon(void) const;

		Character&			operator=(Character const& src);

	private:

		Character();

		std::string			_sName;
		int					_nAP;
		AWeapon*			_ptrWeapon;
};

std::ostream&				operator<<(std::ostream& output, Character const& character);

#endif