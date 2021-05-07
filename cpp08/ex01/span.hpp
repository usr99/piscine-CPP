/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 20:13:57 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/06 02:54:26 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
	
# include <exception>
# include <iterator>

class span
{
	public:

		class myIterator : public std::iterator<std::forward_iterator_tag, int>
		{
			public:

				myIterator(int *x) : _p(x) {}
				myIterator(const myIterator& rhs) : _p(rhs._p) {}

				myIterator&	operator++(void) { _p++; return (*this); }
				int&		operator*(void) { return (*_p); }
				bool 		operator==(const myIterator& rhs) const { return _p == rhs._p; }
				bool 		operator!=(const myIterator& rhs) const { return _p != rhs._p; }
				myIterator&	operator+(int n) { _p += n; return (*this); }
				myIterator&	operator-(int n) { _p -= n; return (*this); }
				
			private:

				int*	_p;
		};

		span(unsigned int n);
		span(span const& src);
		virtual ~span();

		void			addNumber(int n);
		void			addNumber(myIterator end, int n);
		int				shortestSpan(void) const;
		int				longestSpan(void) const;
		myIterator		begin(void) const;
		myIterator		end(void) const;
		myIterator		last(void) const;

		span&			operator=(span const& src);

	private:

		span();

		class			FullArrayException : public std::exception
		{
			public:
				virtual const char* what(void) const throw() { return ("array is full"); }
		};

		class			NotEnoughValuesException : public std::exception
		{
			public:
				virtual const char* what(void) const throw() { return ("at least 2 values are needed to have a span"); }
		};

		int*			_tab;
		unsigned int	_size;
		unsigned int	_nValues;
};

#endif