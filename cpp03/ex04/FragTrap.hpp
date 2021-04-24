/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 02:31:51 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/22 01:03:52 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const& src);
		~FragTrap();

		void		rangedAttack(std::string const& target);
		void		meleeAttack(std::string const& target);
		void		vaulthunter_dot_exe(std::string const& target);
};

#endif
