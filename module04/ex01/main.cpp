/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 18:22:17 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 18:22:17 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "ChainSaw.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "DemonSteve.hpp"

int main(void) {
	Character* me = new Character("me");
	
	std::cout << *me;

	AWeapon* plasmarifle = new PlasmaRifle();
	AWeapon* powerfist = new PowerFist();
	AWeapon* chainsaw = new ChainSaw();
	
	Enemy* Scorpion = new RadScorpion();
	Enemy* Mutant = new SuperMutant();
	Enemy* Steve = new DemonSteve();
	
	std::cout << "/		EQUIP			\\" << std::endl;
	me->equip(plasmarifle);
	std::cout << *me;
	
	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Mutant);

	std::cout << std::endl << "/		EQUIP			\\" << std::endl;
	me->equip(powerfist);
	std::cout << *me;
	
	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Scorpion);
	std::cout << *me;
	
	std::cout << std::endl << "/		EQUIP			\\" << std::endl;
	me->equip(plasmarifle);
	std::cout << *me;

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Scorpion);
	std::cout << *me;

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;	
	me->attack(Scorpion);
	std::cout << *me;

	std::cout << std::endl << "/		EQUIP			\\" << std::endl;
	me->equip(powerfist);
	std::cout << *me;

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Mutant);
	me->attack(Mutant);
	
	std::cout << std::endl << "/		RECOVER			\\" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Mutant);

	std::cout << std::endl << "/		EQUIP			\\" << std::endl;
	me->equip(chainsaw);
	std::cout << *me;

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Mutant);

	std::cout << std::endl << "/		RECOVER			\\" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Steve);
	me->attack(Steve);
	me->attack(Steve);

	std::cout << std::endl << "/		RECOVER			\\" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Steve);
	me->attack(Steve);
	me->attack(Steve);

	std::cout << std::endl << "/		RECOVER			\\" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();

	std::cout << std::endl << "/		ATTACK			\\" << std::endl;
	me->attack(Steve);
	me->attack(Steve);

	std::cout << std::endl << "/		EQUIP			\\" << std::endl;
	me->equip(NULL);
	std::cout << *me;
	return 0;
}
