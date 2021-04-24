/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 03:59:18 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

class ScavTrap  
{
	public:

		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();

		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(void);
		int			getHitPoints(void);
		int			getEnergyPoints(void);

		ScavTrap&	operator=(ScavTrap const& src);

	private:

		int			_nHitPoints;
		int			_nMaxHitPoints;
		int			_nEnergyPoints;
		int			_nMaxEnergyPoints;
		int			_nLevel;
		std::string	_sName;
		int			_nMeleeAttackDmg;
		int			_nRangedAttackDmg;
		int			_nArmorDmgReduction;

		static const std::string	challenges[3];
};

#endif
