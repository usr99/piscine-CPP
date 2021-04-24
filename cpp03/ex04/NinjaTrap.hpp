/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 18:28:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:

		NinjaTrap();
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const& src);
		~NinjaTrap();
		
		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		ninjaShoebox(ClapTrap& target);
		void		ninjaShoebox(FragTrap& target);
		void		ninjaShoebox(ScavTrap& target);
		void		ninjaShoebox(NinjaTrap& target);
};

#endif
