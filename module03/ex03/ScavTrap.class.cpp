/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/30 14:57:40 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/30 14:57:40 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::string message[] = {
		"Who is the target?",
		"Just tell me what to shoot.",
		"I am here.",
		"Let us begin.",
		"I am ready."
	};

	this->_name = name;
	this->_hp = 100;
	this->_hpMax = 100;
	this->_energy = 50;
	this->_energyMax = 50;
	this->_level = 1;
	this->_meleeAttack = 20;
	this->_rangedAttack = 15;
	this->_armor = 3;
	std::cout << "<" << this->_name << "> \"" << message[std::rand() % 5] << "\"" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::string message[] = {
		"I am nearly dead / It's time for a second wind / Let my aim be true.",
		"I will not die here / I still have too much to do / And too much ammo.",
		"Dammit!",
		"Come on!"
	};
	std::cout << "<" << this->_name << "> \"" << message[std::rand() % 4] << "\"" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> " << "\"Critical killing / Is an art unto itself / And I am Rembrandt.\"" << std::endl;
	std::cout << "<" << this->_name << "> attacks <"
	<< target << "> at range causing <"
	<< this->_rangedAttack << "> points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "<" << this->_name << "> attacks <"
		<< target << "> from close by dealing <"
		<< this->_rangedAttack << "> points of damage! \"Sorry, did that hurt? / That \"sorry\" was sarcasm / I am not sorry.\"" << std::endl;
}

void	ScavTrap::challengeNewComer(std::string const &target) {
	std::string challenges[] = {
		" to do the chubby bunny challenge!",
		" to dance for 5 hours straight",
		" to down a bottle of sparkling water"
	};
	if (this->_energy >= 25) {
		std::cout << "<" << this->_name << "> Challenges " << target << challenges[std::rand() % 3] << std::endl;
	} else {
		std::cout << "Dammit! Not enough mana to use challengeNewComer" << std::endl;
	}
}
