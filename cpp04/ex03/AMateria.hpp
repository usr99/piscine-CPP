/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:24:02 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 03:50:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{	
	public:

		AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& src);
		virtual ~AMateria();
		
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
		std::string const&	getType(void) const;	// Returns the Materia's type
		unsigned int		getXP(void) const;		// Returns the Materia's XP

		virtual AMateria&	operator=(AMateria const& src);

	protected:

		unsigned int		_xp;
		std::string			_type;
};
#endif