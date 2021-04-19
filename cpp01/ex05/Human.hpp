/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 05:29:28 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 05:43:31 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human
{
	public:

		Human(Brain& brain);
		~Human();

		std::string	identify(void) const;
		Brain&		getBrain(void) const;

	private:

		Brain&		_brain;
};

#endif
