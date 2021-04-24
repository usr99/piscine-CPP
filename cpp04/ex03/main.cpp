/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 03:41:25 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 18:01:22 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	tmp = src->createMateria("cure");
	std::cout << std::endl << bob->getName() << " learns " << tmp->getType() << std::endl;
	bob->equip(tmp);
	tmp = src->createMateria("fireball");
	if (!tmp)
		std::cout << bob->getName() << " wants to learn fireball but this Materia doesn't exist" << std::endl;
	bob->use(0, *me);
	bob->use(1, *me);

	std::cout << std::endl << bob->getName() << " absorbs " << me->getName() << std::endl;
	*(Character *)bob = *(Character *)me;

	std::cout << "MateriaSource copied" << std::endl;
	IMateriaSource* src2 = new MateriaSource(*(MateriaSource *)src);

	tmp = src2->createMateria("ice");
	std::cout << bob->getName() << " learns " << tmp->getType() << std::endl << std::endl;
	bob->equip(tmp);
	
	bob->use(0, *me);
	bob->use(1, *me);
	bob->use(2, *me);
	bob->use(3, *me);

	delete bob;
	delete me;
	delete src;
	delete src2;

	return 0;
}