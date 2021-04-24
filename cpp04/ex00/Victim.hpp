/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 02:12:29 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 02:43:56 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <iostream>

class Victim
{
	public:

		Victim(std::string name);
		Victim(Victim const& src);
		virtual ~Victim();

		virtual void	getPolymorphed(void) const;
		std::string		getName(void) const;
		
		Victim&			operator=(Victim const& src);

	private:

		Victim();

		std::string		_sName;

};

std::ostream&			operator<<(std::ostream& output, Victim const& victim);

#endif