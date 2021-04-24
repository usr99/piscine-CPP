/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:47:19 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:03:41 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle();
		virtual ~PlasmaRifle();

		virtual void	attack(void) const;
};

#endif