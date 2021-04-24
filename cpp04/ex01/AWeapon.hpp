/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:17:47 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 05:19:56 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class AWeapon  
{
	public:

		AWeapon(std::string const& name, int apcost, int damage);
		AWeapon(AWeapon const& src);
		virtual ~AWeapon();
		
		const std::string	getName(void) const;
		int					getAPCost(void) const;
		int					getDamage(void) const;
		virtual void		attack(void) const = 0;

		AWeapon&			operator=(AWeapon const& src);

	protected:

		AWeapon();

		std::string			_sName;
		int					_nApCost;
		int					_nDamage;
};

#endif
