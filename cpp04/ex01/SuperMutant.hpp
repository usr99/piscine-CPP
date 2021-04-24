/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:08:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:27:23 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		
		SuperMutant();
		virtual ~SuperMutant();
		
		virtual void	takeDamage(int damage);
};

#endif