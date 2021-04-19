/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:00:50 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 05:24:35 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	public:

		Brain(bool big, bool smart);
		~Brain();

		std::string	identify(void) const;
		void		showBrainInfo(void) const;

	private:

		bool		_bBigBrain;
		bool		_bSmart;
};

#endif
