/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 01:59:48 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 17:30:34 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "AMateria.hpp"

class Character : public ICharacter
{
	public:

		Character(std::string name);
		Character(Character const& src);
		~Character();

		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		virtual std::string const&	getName(void) const;

		Character&					operator=(Character const& src);

	private:
	
		Character();

		std::string					_name;
		AMateria*					_inventory[4];

		bool						checkExistingMateria(int idx);
		void						destroyMaterias(void);
};

#endif