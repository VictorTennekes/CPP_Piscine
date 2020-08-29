/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 17:00:19 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 17:00:19 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _spellsSaved(0) {}

MateriaSource::MateriaSource(MateriaSource const &src) {
	for (int i = 0; i < 4; i++) {
		delete this->_spells[i];
		if (!src._spells[i])
			this->_spells[i] = NULL;
		else
			this->_spells[i] = src._spells[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src) {
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++) {
		delete this->_spells[i];
		if (!src._spells[i])
			this->_spells[i] = NULL;
		else
			this->_spells[i] = src._spells[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource() {}

void	MateriaSource::learnMateria(AMateria *materia) {
	if (!materia || this->_spellsSaved > 3) return ;
	this->_spells[this->_spellsSaved] = materia->clone();
	this->_spellsSaved += 1;
}


AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (unsigned int i = 0; i < this->_spellsSaved; i++) {
		if (this->_spells[i]->getType() == type)
			return (this->_spells[i]->clone());
	}
	return (NULL);
}
