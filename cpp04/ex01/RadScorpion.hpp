/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:08:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 04:33:29 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		
		RadScorpion();
		virtual ~RadScorpion();
};

#endif