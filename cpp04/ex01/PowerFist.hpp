/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:47:19 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:07:07 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist();
		virtual ~PowerFist();

		virtual void	attack(void) const;
};

#endif