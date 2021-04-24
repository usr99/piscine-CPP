/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LichKing.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:08:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 16:50:28 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LICHKING_H
# define LICHKING_H

# include "Enemy.hpp"

class LichKing : public Enemy
{
	public:
		
		LichKing();
		virtual ~LichKing();
		
		virtual void	takeDamage(int damage);
};

#endif