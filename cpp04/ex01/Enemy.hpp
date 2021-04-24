/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 04:08:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 05:23:00 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy
{
	public:
		
		Enemy(int hp, std::string const& type);
		Enemy(Enemy const& src);
		virtual ~Enemy();
		
		const std::string	getType(void) const;
		int					getHP(void) const;
		virtual void		takeDamage(int damage);

		Enemy&				operator=(Enemy const& src);

	protected:

		Enemy();

		std::string			_sType;
		int					_nHP;
};

#endif