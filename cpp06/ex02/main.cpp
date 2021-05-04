/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 22:57:53 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/30 23:11:33 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*	generate(void)
{
	int	randomIndex;

	std::srand(time(NULL));
	randomIndex = std::rand() % 3;

	if (randomIndex == 0)
		return (new A);
	else if (randomIndex == 1)
		return (new B);
	else
		return (new C);
}

void	identify_from_pointer(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << 'A' << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << 'B' << std::endl;
	else
		std::cout << 'C' << std::endl;
}

void 	identify_from_reference( Base & p)
{
	try
	{
		A& ref = dynamic_cast<A&>(p);
		std::cout << 'A' << std::endl;
		(void)ref;
	}
	catch(const std::exception	&e) {}
	
	try
	{
		B& ref = dynamic_cast<B&>(p);
		std::cout << 'B' << std::endl;
		(void)ref;
	}
	catch(const std::exception	&e) {}

	try
	{
		C& ref = dynamic_cast<C&>(p);
		std::cout << 'C' << std::endl;
		(void)ref;
	}
	catch(const std::exception	&e) {}
}

int		main(void)
{
	Base*	ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	
	return (0);
}