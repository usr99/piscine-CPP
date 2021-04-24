/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 01:54:06 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 02:23:57 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:

		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& src);
		virtual ~Sorcerer();
		
		void		polymorph(Victim const& victim) const;
		std::string	getName(void) const;
		std::string	getTitle(void) const;

		Sorcerer&	operator=(Sorcerer const& src);

	private:

		Sorcerer();

		std::string	_sName;
		std::string	_sTitle;
};

std::ostream&		operator<<(std::ostream& output, Sorcerer const& sorcerer);

#endif