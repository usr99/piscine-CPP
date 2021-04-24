/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ashbringer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 03:47:19 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 16:52:50 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASHBRINGER_H
# define ASHBRINGER_H

# include "AWeapon.hpp"

class Ashbringer : public AWeapon
{
	public:

		Ashbringer();
		virtual ~Ashbringer();

		virtual void	attack(void) const;
};

#endif