/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 23:20:18 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/21 02:02:42 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:

		Fixed();
		Fixed(Fixed const& src);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	
		Fixed&				operator=(Fixed const& src);

	private:

		int					_value;
		static const int	_bitWidth;
};

#endif
