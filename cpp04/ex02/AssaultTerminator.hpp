/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:23:20 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:29:14 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
	
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const& src);
		virtual ~AssaultTerminator();

		virtual ISpaceMarine*	clone(void) const;
		virtual void			battleCry(void) const;
		virtual void			rangedAttack(void) const;
		virtual void			meleeAttack(void) const;
		
		AssaultTerminator&		operator=(AssaultTerminator const& src);
};
#endif