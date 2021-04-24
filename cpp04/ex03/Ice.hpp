/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:47:03 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:53:28 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
	
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		virtual ~Ice();

		virtual Ice*	clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif