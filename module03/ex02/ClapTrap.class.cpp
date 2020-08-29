/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/31 03:09:40 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/31 03:09:40 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name) {
	this->_hp = 100;
	this->_hpMax = 100;
	this->_energy = 100;
	this->_energyMax = 100;
	this->_level = 1;
	this->_meleeAttack = 30;
	this->_rangedAttack = 20;
	this->_armor = 5;
	std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Claptrap copy called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << "ClapTrap operator overloader called" << std::endl;
	this->_hp = claptrap._hp;
	this->_hpMax = claptrap._hpMax;
	this->_energy = claptrap._energy;
	this->_energyMax = claptrap._energyMax;
	this->_level = claptrap._level;
	this->_name = claptrap._name;
	this->_meleeAttack = claptrap._meleeAttack;
	this->_rangedAttack = claptrap._rangedAttack;
	this->_armor = claptrap._armor;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap destructor called" << std::endl;
}

std::string	ClapTrap::getName() {
	return(this->_name);
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > 0 && amount > this->_armor) {
		if (amount - this->_armor > this->_hp) {
			this->_hp = 0;
		} else {
			this->_hp -= (amount - this->_armor);
		}
		std::cout << "<" << this->_name << "> " << "Ouch! I have <" << this->_hp << "> Health left" << std::endl;
	} else {
		std::cout << "<"<< this->_name << "> didn't even get scratched by your pityfull attack" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount > 100) amount = 100;
	if (this->_hp + amount > 100) {
		this->_hp = 100;
	} else {
		this->_hp += amount;
	}
	std::cout << "<" << this->_name << "> gained <" << amount << "> sweet life juice! and now has <" << this->_hp << "> health points" << std::endl;
}
