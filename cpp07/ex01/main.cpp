/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:20:39 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/04 17:28:43 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cmath>
#include "iter.hpp"

void	print(std::string str)
{
	std::cout << str << std::endl;
}

template<typename T>
void	temPrint(T elem)
{
	std::cout << elem << std::endl;
}

/*int		main(void)
{
	// char* array
	std::string	array0[2] = {"salut", "bonjour"};
	::iter(array0, 2, &print);

	// int array
	int		array1[5] = {4, 144, 25, 16, 400};
	::iter(array1, 5, &temPrint<int>);

	// float array
	float	array2[4] = {42.42f, 1.234f, 71.17f, 2.10f};
	::iter(array2, 4, &temPrint<float>);

	return (0);
}*/

class Awesome {
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	int		tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome	tab2[5];

	::iter(tab, 5, print);
	::iter(tab2, 5, print);

	return (0);
}