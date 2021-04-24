/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:20:18 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 02:02:57 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(Fixed const& src);
		Fixed(int const nb);
		Fixed(float const fl);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
	
		Fixed&				operator=(Fixed const& src);

	private:

		int					_value;
		static const int	_bitWidth;
		static const int	_bitWidthPower;
};

std::ostream& operator<<(std::ostream& output, Fixed const& fixed);

#endif
