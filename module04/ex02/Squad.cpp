/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 22:27:26 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/06 22:27:26 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <string>
#include <iostream>

Squad::Squad() : _squadArray(NULL), _count(0) {}

Squad::Squad(const Squad &src) : ISquad() {
	this->_count = 0;
	this->_squadArray = NULL;
	*this = src;
}

Squad	&Squad::operator=(const Squad &squad) {
	for (int i = 0; i <  this->_count; i++)
		delete this->_squadArray[i];
	delete [] this->_squadArray;
	if (squad._count)
		this->_squadArray = new ISpaceMarine*[squad._count];
	else
		this->_squadArray = NULL;
	for (int i = 0; i < squad._count; i++)
		this->_squadArray[i] = squad._squadArray[i]->clone();
	this->_count = squad._count;
	return (*this);
}

Squad::~Squad() {
	for (int i = 0; i < this->_count; i++) {
		delete this->_squadArray[i];
	}
	delete [] this->_squadArray;
}

int	Squad::getCount() const {
	return (this->_count);
}

ISpaceMarine	*Squad::getUnit(int num) const {
	if (num >= 0  && num < this->_count) {
		return(this->_squadArray[num]);
	} else {
		return (NULL);
	}
}

int	Squad::push(ISpaceMarine *soldier) {
	if (!soldier)
		return(this->_count);
	for (int i = 0; i < this->_count; i++) {
		if (this->_squadArray[i] == soldier)
			return (this->_count);
	}
	ISpaceMarine **newSquad = new ISpaceMarine*[this->_count + 1];
	if (!newSquad)
		return (this->_count);
	if (this->_count)
		memcpy(newSquad, this->_squadArray, this->_count * sizeof(ISpaceMarine*));
	delete [] this->_squadArray;
	this->_squadArray = newSquad;
	this->_squadArray[this->_count] = soldier;
	this->_count += 1;
	return (this->_count);
}
