/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:47:03 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:57:07 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
	
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		virtual ~Cure();

		virtual Cure*	clone(void) const;
		virtual void	use(ICharacter& target);
};

#endif