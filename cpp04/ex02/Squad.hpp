/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:46:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:06:04 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
	
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct	s_squad
{
	ISpaceMarine	*unit;
	struct s_squad	*next;
}				t_squad;

class Squad : public ISquad
{
	public:

		Squad();
		Squad(Squad const& src);
		virtual ~Squad();

		virtual int				getCount(void) const;
		virtual ISpaceMarine*	getUnit(int index) const;
		virtual int				push(ISpaceMarine* unit);

		Squad&					operator=(Squad const& src);

	private:

		t_squad*				_squad;
		int						_nCount;
};

#endif