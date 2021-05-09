/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:31:44 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 14:29:17 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

template<typename T>
class Array
{
	public:

		Array() : _size(0)
		{
			this->_tab = new T[0];
		}

		Array(unsigned int n) : _size(n)
		{
			this->_tab = new T[n]();
		}

		Array(Array const& src)
		{
			this->_tab = NULL;
			*this = src;
		}

		virtual ~Array()
		{
			delete [] this->_tab;
		}

		int		size(void) const
		{
			return (this->_size);
		}

		T&		operator[](unsigned int index) const
		{
			if (index >= this->_size)
				throw std::out_of_range("index is out of range");
			return (this->_tab[index]);
		}

		Array&	operator=(Array const& src)
		{
			if (this->_tab != NULL)
				delete [] this->_tab;

			this->_size = src._size;
			this->_tab = new T[this->_size];

			for (unsigned int i = 0 ; i < this->_size ; i++)
				this->_tab[i] = src._tab[i];

			return (*this);
		}

	private:

		T*				_tab;
		unsigned int	_size;
};

#endif
