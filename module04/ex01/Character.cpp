/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 17:45:46 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 17:45:46 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _maxAP(40), _weapon(NULL) {}

Character::Character(const Character &src) {
	*this = src;
}

Character	&Character::operator=(const Character &character) {
	this->_name = character._name;
	this->_ap = character._ap;
	this->_maxAP = character._maxAP;
	this->_weapon = character._weapon;
	return (*this);
}

Character::~Character() {}

void	Character::recoverAP() {
	if (this->_ap + 10 >= this->_maxAP) {
		this->_ap = this->_maxAP;
	} else {
		this->_ap += 10;
	}
}

void	Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

// "NAME attacks ENEMY_TYPE with a WEAPON_NAME"

void	Character::attack(Enemy *target) {
	if (!this->_weapon || !target)
		return ;
	if (this->_ap >= this->_weapon->getAPCost()) {
		this->_ap -= this->_weapon->getAPCost();
		std::cout << this->getName() << " attacks " << target->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		target->takeDamage(this->_weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
	} else {
		return ;
	}
}

std::string	const &Character::getName() const {
	return (this->_name);
}

int		Character::getAP() const {
	return (this->_ap);
}

AWeapon	*Character::getWeapon() const {
	return (this->_weapon);
}

std::ostream	&operator<<(std::ostream &out, const Character &character) {
	std::cout << character.getName() << " has " << character.getAP() << " AP and";
	if (character.getWeapon() != NULL) {
		std::cout << " wields a " << character.getWeapon()->getName() << std::endl;
	} else {
		std::cout << " is unarmed" << std::endl;
	}
	return(out);
}
