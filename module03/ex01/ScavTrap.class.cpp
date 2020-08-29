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

ScavTrap::ScavTrap(std::string name) : _name(name) {
	std::string message[] = {
		"Who is the target?",
		"Just tell me what to shoot.",
		"I am here.",
		"Let us begin.",
		"I am ready."
	};

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

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ScavTrap) {
	this->_hp = ScavTrap._hp;
	this->_hpMax = ScavTrap._hpMax;
	this->_energy = ScavTrap._energy;
	this->_energyMax = ScavTrap._energyMax;
	this->_level = ScavTrap._level;
	this->_name = ScavTrap._name;
	this->_meleeAttack = ScavTrap._meleeAttack;
	this->_rangedAttack = ScavTrap._rangedAttack;
	this->_armor = ScavTrap._armor;
	return (*this);
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

void	ScavTrap::takeDamage(unsigned int amount) {
	if (amount > 0 && amount > this->_armor) {
		if (amount - this->_armor > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= (amount - this->_armor);
		}
		std::cout << "<" << this->_name << "> " << "Aaargh! I have <" << this->_hp << "> Health left" << std::endl;
	} else {
		std::cout << "<"<< this->_name << "> dashed out of the way and dodged the attack." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (amount > 100) amount = 100;
	if (this->_hp + amount > 100) {
		this->_hp = 100;
	} else {
		this->_hp += amount;
	}
	std::cout << "<" << this->_name << "> gained <" << amount << "> due to second wind! and now has <" << this->_hp << "> health points" << std::endl;
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
