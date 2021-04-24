/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 05:15:49 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/23 17:12:38 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "LichKing.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Ashbringer.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;

	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	Enemy* king = new LichKing();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* ash = new Ashbringer();
	
	std::cout << "\033[33;01m" << "--- SuperMutant Fight ---" << "\033[00m" << std::endl;
	me->equip(pr);		// Equip Plasma Rifle
	std::cout << *me;
	me->equip(pf);		// Equip Power Fist
	std::cout << *me;
	me->attack(a);		// Attack SuperMutant (50 - 3 damage)
	std::cout << *me;
	me->attack(a);		// Attack SuperMutant (50 - 3 damage)
	std::cout << *me;
	me->attack(a);		// Attack SuperMutant (50 - 3 damage)
	me->equip(pr);		// Equip Plasma Rifle
	std::cout << *me;
	me->attack(a);		// Attack SuperMutant (21 - 3 damage)
	// SuperMutant should have died because he took 171 damage
	// but he has damage reduction
	std::cout << "SuperMutant has " << a->getHP() << " HP" << std::endl;

	// Character recovers before next fight
	me->recoverAP();	// Recover 10AP
	me->recoverAP();	// Recover 10AP
	me->recoverAP();	// Recover 10AP

	std::cout << "\033[33;01m" << "--- RadScorpion Fight ---" << "\033[00m" << std::endl;
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	std::cout << "\033[33;01m" << "--- Lich King Fight ---" << "\033[00m" << std::endl;
	me->attack(king);	// Attack Lich King with PlasmaRifle
	me->equip(ash);		// Equip Ashbringer
	std::cout << *me;	
	me->attack(king);	// Attack Lich King with Ashbringer
	me->recoverAP();	// Recover 10AP
	me->recoverAP();	// Recover 10AP
	me->recoverAP();	// Recover 10AP
	std::cout << *me;
	me->recoverAP();	// AP=40 so does nothing
	std::cout << *me;
	me->attack(king);	// Attack Lich King (and kills him)

	return (0);
}
