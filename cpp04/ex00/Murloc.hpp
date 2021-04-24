/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Murloc.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:12:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 03:00:15 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MURLOC_H
# define MURLOC_H

# include "Victim.hpp"

class Murloc : public Victim
{
	public:

		Murloc(std::string name);
		virtual ~Murloc();

		virtual void	getPolymorphed(void) const;

	private:

		Murloc();

};

#endif