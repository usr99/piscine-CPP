/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:58:23 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/18 17:54:27 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>

class Pony
{

	public:

		// Constructors
		Pony();
		Pony(int height, int weight, int max_speed, int age, std::string coat, std::string pattern);
		// Destructor
		~Pony();
		// Pony methods
		void do_things();				// Pony do things
		void show_pony_stats();			// Introduce Pony
		void whinny();					// Pony whinny
		bool jump(int height_to_jump);	// Pony jumps

	private:

		// Pony attributes
		int			_height;
		int			_weight;
		int			_max_speed;
		int			_age;
		std::string	_coat;
		std::string	_pattern;

};

#endif
