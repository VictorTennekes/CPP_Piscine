/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 22:55:29 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/06 22:55:29 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

#include <iostream>

# define RED "\x1B[31m"
# define RESET	"\x1B[0m"

int main(void) {
	std::cout << std::endl << RED << "/	SOLDIERS/SQUAD_ONE GET CREATED	\\" << RESET << std::endl;
	ISpaceMarine* bob_one = new TacticalMarine;
	ISpaceMarine* jim_one = new AssaultTerminator;
	ISquad* squad_one = new Squad;

	std::cout << std::endl << RED << "/	SOLDIERS/SQUAD_TWO GET CREATED	\\" << RESET << std::endl;
	ISpaceMarine* bob_two = new TacticalMarine;
	ISpaceMarine* jim_two = new AssaultTerminator;
	ISquad* squad_two = new Squad;

	ISpaceMarine* bob_three = new TacticalMarine;
	ISpaceMarine* jim_three = new AssaultTerminator;

	std::cout << std::endl << RED << "/	SQUAD_ONE GETS FORMED	\\" << RESET << std::endl;
	squad_one->push(bob_one); squad_one->push(jim_one); squad_one->push(bob_one);
	std::cout << "Soldiers in the squad: " << squad_one->getCount() << " |	Soldier[0]: " << squad_one->getUnit(0) << " |	Soldier[-1]: " << squad_one->getUnit(-1) << std::endl;

	std::cout << std::endl << RED << "/	SQUAD_TWO GETS FORMED	\\" << RESET << std::endl;
	squad_two->push(bob_two); squad_two->push(jim_two);
	std::cout << "Soldiers in the squad: " << squad_two->getCount() << " |	Soldier[1]: " << squad_two->getUnit(1) << std::endl;
	
	std::cout << std::endl << RED << "/	SQUAD_THREE GETS CREATED	\\" << RESET << std::endl;
	ISquad* squad_three = new Squad(*((Squad *)squad_two));

	std::cout << std::endl << RED << "/	SQUAD_THREE GETS FORMED	\\" << RESET << std::endl;
	squad_three->push(bob_three); squad_three->push(jim_three);
	std::cout << "Soldiers in the squad: " << squad_three->getCount() << " |	Soldier[1]: " << squad_three->getUnit(1) << std::endl;

	std::cout << std::endl << RED << "/	SQUAD_ONE CRIES AND ATTACKS	\\" << RESET << std::endl;
	for (int i = 0; i < squad_one->getCount(); i++) {
		ISpaceMarine* soldier_one = squad_one->getUnit(i);
		soldier_one->battleCry(); soldier_one->rangedAttack(); soldier_one->meleeAttack();
	}

	std::cout << std::endl << RED << "/	SQUAD_TWO CRIES AND ATTACKS	\\" << RESET << std::endl;
	for (int i = 0; i < squad_two->getCount(); i++) {
		ISpaceMarine* soldier_two = squad_two->getUnit(i);
		soldier_two->battleCry(); soldier_two->rangedAttack(); soldier_two->meleeAttack();
	}

	std::cout << std::endl << RED << "/	SQUAD_THREE CRIES AND ATTACKS	\\" << RESET << std::endl;
	for (int i = 0; i < squad_three->getCount(); i++) {
		ISpaceMarine* soldier_three = squad_three->getUnit(i);
		soldier_three->battleCry(); soldier_three->rangedAttack(); soldier_three->meleeAttack();
	}

	std::cout << std::endl << RED << "/	SQUAD_ONE DIES	\\" << RESET << std::endl;
	delete squad_one;

	std::cout << std::endl << RED << "/	SQUAD_TWO DIES	\\" << RESET << std::endl;
	delete squad_two;

	std::cout << std::endl << RED << "/	SQUAD_THREE DIES	\\" << RESET << std::endl;
	delete squad_three;
	return (0);
}
