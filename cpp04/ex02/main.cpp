/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:18 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 01:14:53 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	std::cout << "\033[33;01m" << "--- Simple tests ---" << "\033[00m" << std::endl;
	
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\033[33;01m" << "--- pushing units twice ---" << "\033[00m" << std::endl;

	std::cout << "squad size : " << vlc->getCount() << std::endl;
	vlc->push(bob);
	std::cout << "push bob twice, squad size : " << vlc->getCount() << std::endl;
	vlc->push(jim);
	std::cout << "push jim twice, squad size : " << vlc->getCount() << std::endl;

	std::cout << "\033[33;01m" << "--- units are destroyed before assignation ---" << "\033[00m" << std::endl;

	ISpaceMarine* wal = new AssaultTerminator;
	ISpaceMarine* lee = new AssaultTerminator;
	ISpaceMarine* ben = new TacticalMarine;
	ISpaceMarine* jamin = new TacticalMarine;

	Squad* vlc2 = new Squad;
	vlc2->push(wal);
	vlc2->push(lee);

	Squad* vlc3 = new Squad;
	vlc3->push(ben);
	vlc3->push(jamin);

	*vlc3 = *vlc2;

	for (int i = 0; i < vlc3->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3->getUnit(i);
		cur->battleCry();
	}

	delete vlc;
	delete vlc2;
	delete vlc3;

	return (0);
}