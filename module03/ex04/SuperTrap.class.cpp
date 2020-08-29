/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 04:27:36 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 04:27:36 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.class.hpp"
#include <iostream>

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->FragTrap::_hp = 100;
	this->FragTrap::_hpMax = 100;
	this->NinjaTrap::_energy = 120;
	this->NinjaTrap::_energyMax = 120;
	this->FragTrap::_level = 1;
	this->NinjaTrap::_meleeAttack = 60;
	this->FragTrap::_rangedAttack = 20;
	this->FragTrap::_armor = 5;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target) {
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target) {
	NinjaTrap::meleeAttack(target);
}
