/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 03:43:24 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>

class FragTrap  
{
	public:

		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const& src);
		~FragTrap();

		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const& target);
		int			getHitPoints(void);
		int			getEnergyPoints(void);

		FragTrap&	operator=(FragTrap const& src);

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
};

#endif
