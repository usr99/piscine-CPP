/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:12:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 02:43:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class Peon : public Victim
{
	public:

		Peon(std::string name);
		virtual ~Peon();

		virtual void	getPolymorphed(void) const;

	private:

		Peon();

};

#endif