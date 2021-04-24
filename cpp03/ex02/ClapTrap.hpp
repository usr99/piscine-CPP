/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:47:55 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap  
{
	public:

		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const& src);
		~ClapTrap();

		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHitPoints(void);
		int			getEnergyPoints(void);

		ClapTrap&	operator=(ClapTrap const& src);

	protected:

		int			_nHitPoints;
		int			_nMaxHitPoints;
		int			_nEnergyPoints;
		int			_nMaxEnergyPoints;
		int			_nLevel;
		std::string	_sName;
		int			_nMeleeAttackDmg;
		int			_nRangedAttackDmg;
		int			_nArmorDmgReduction;
};

#endif
