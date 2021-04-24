/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 14:48:43 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();
		
		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		challengeNewcomer(void);

	private:

		static const std::string	challenges[3];
};

#endif
