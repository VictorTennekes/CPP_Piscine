/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 15:36:49 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 15:36:49 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character(std::string const &name) : _name(name), _spells(new AMateria*[4]), _spellsLearned(0) {}

Character::Character(Character const &src) : _name(src.getName()) {
	for (int i = 0; i < 4; i++) {
		delete this->_spells[i];
		if (!src._spells[i])
			this->_spells[i] = NULL;
		else
			this->_spells[i] = src._spells[i];
	}
}

Character	&Character::operator=(Character const &src) {
	if (this == &src)
		return (*this);
	this->_name = src.getName();
	for (int i = 0; i < 4; i++) {
		delete this->_spells[i];
		if (!src._spells[i])
			this->_spells[i] = NULL;
		else
			this->_spells[i] = src._spells[i];
	}
	return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const {
	return (this->_name);
}

void		Character::equip(AMateria *materia) {
	for (int i = 0; i < this->_spellsLearned; i++) {
		if (this->_spells[i] == materia)
			return ;
	}
	if (this->_spellsLearned > 3) {
		std::cout << "You are not BIGBRAIN eneough to learn more spells" << std::endl;
		return ;
	} else if (!materia) {
		std::cout << "not a valid spell... Jamie Oliver recipes do not count as magic" << std::endl;
		return ;
	}
	this->_spells[this->_spellsLearned] = materia;
	this->_spellsLearned += 1;
}

void		Character::unequip(int idx) {
	if (idx > this->_spellsLearned - 1 || idx < 0) return ;
	AMateria **newSpells = new AMateria*[4];
	if (!newSpells) return ;
	int	newLearned = 0;
	for (int i = 0; i < this->_spellsLearned; i++) {
		if (i == idx) continue ;
		newSpells[newLearned] = this->_spells[i];
		newLearned += 1;
	}
	delete [] this->_spells;
	this->_spellsLearned = newLearned;
	this->_spells = newSpells;
	return ;
}

void		Character::use(int idx, ICharacter &target) {
	if (idx > this->_spellsLearned - 1 || idx < 0) return ;
	AMateria *spell = this->_spells[idx];
	if (!spell) return;
	spell->use(target);
}
