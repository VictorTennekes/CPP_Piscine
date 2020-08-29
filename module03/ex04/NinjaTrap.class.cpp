/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 03:51:27 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 03:51:27 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	std::string message[] = {
		"It’s time to fight!",
		"Yes, into the fray!",
		"Badass or not, you will die.",
		"You're already dead. You know that, right?",
		"I want to see what your guts look like.",
		"Yes! To the bloodletting!",
		"You cannot tame me.",
		"I am the alpha!"
	};

	this->_name = name;
	this->_hp = 60;
	this->_hpMax = 60;
	this->_energy = 120;
	this->_energyMax = 120;
	this->_level = 1;
	this->_meleeAttack = 60;
	this->_rangedAttack = 5;
	this->_armor = 0;
	std::cout << "<" << this->_name << "> \"" << message[std::rand() % 8] << "\"" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "<" << this->_name << "> \"" << "Some days, you are the Hunter; some days, you are the hunted." << "\"" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> " << "\"I have no blood, so I'm taking yours.\"" << std::endl;
	std::cout << "<" << this->_name << "> attacks <"
	<< target << "> at range causing <"
	<< this->_rangedAttack << "> points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> attacks <"
		<< target << "> from close by dealing <"
		<< this->_meleeAttack << "> points of damage! \"Let’s see if my knife fits in your skull.\"" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &claptrap) {
	std::cout << "<" << this->_name
		<< "> wins the shoebox-meditation battle against the other Ninjatrap called <"
		<< claptrap.getName() << "> and deals 80 damage" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap &claptrap) {
	std::cout << "<" << this->_name
		<< "> wins the game of hot potato (grenade edition) with <"
		<< claptrap.getName() << "> and deals 80 damage" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &claptrap) {
	std::cout << "<" << this->_name
		<< "> Is even more annoying than the ScavTrap <"
		<< claptrap.getName() << "> and deals 80 damage" << std::endl;
}
