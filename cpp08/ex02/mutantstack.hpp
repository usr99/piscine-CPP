/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:18:27 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/09 15:44:29 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_H
# define MUTANT_STACK_H

# include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:

		class iterator
		{
			public:

				iterator() : ptr(NULL) {}
				iterator(T* x) : ptr(x) {}
				iterator(const iterator& rhs) : ptr(rhs.ptr) {}
				virtual ~iterator() {}
				
				iterator&	operator=(const iterator& rhs)		{ this->ptr = rhs.ptr; return (*this); }
				iterator&	operator++(void)					{ this->ptr++; return (*this); }
				iterator&	operator--(void)					{ this->ptr--; return (*this); }
				T&			operator*(void)						{ return (*ptr); }
				bool		operator!=(const iterator& rhs)		{ return (ptr != rhs.ptr); }
				bool		operator>=(const iterator& rhs)		{ return (ptr >= rhs.ptr); }

			private:
		
				T*			ptr;
		};

		MutantStack(void) : std::stack<T>(), it(NULL), ite(NULL) {}
		MutantStack(const MutantStack<T>& rhs) : std::stack<T>(rhs) { *this = rhs; }
		virtual ~MutantStack(void) {}
		
		void		pop(void)
		{
			std::stack<T>::pop();
			if (this->size() == 0)
			{
				this->it = NULL;
				this->ite = NULL;	
			}
			else
				--ite;
		}
		
		void		push(const T& val)
		{
			std::stack<T>::push(val);
			if (this->size() == 1)
				this->it = &this->top();
			this->ite = &this->top();
		}

		iterator	begin(void) const
		{
			return (static_cast<iterator>(it));
		}
		
		iterator	end(void) const
		{
			return (static_cast<iterator>(ite + 1));
		}

		MutantStack<T> &operator=(const MutantStack<T>& rhs)
		{
			static_cast<std::stack<T> >(*this) = std::stack<T>::operator=(static_cast<std::stack<T> >(rhs));

			T*	tmp = new T[rhs.size()];

			int	i = this->size() - 1;
			while (!this->empty())
			{
				tmp[i] = this->top();
				this->pop();
				i--;
			}

			i = 0;
			while (this->size() < rhs.size())
			{
				this->push(tmp[i]);
				i++;
			}

			delete [] tmp;

			return (*this);
		}

	private:

		T*	it;
		T*	ite;
};

#endif
