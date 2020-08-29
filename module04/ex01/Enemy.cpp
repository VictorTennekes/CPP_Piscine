/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/04 16:48:08 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/04 16:48:08 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hp(hp) {}

Enemy::Enemy(const Enemy &src) {
	*this = src;
}

Enemy	&Enemy::operator=(const Enemy &enemy) {
	this->_type = enemy.getType();
	this->_hp = enemy.getHP();
	return (*this);
}

Enemy::~Enemy() {}

std::string	Enemy::getType() const {
	return(this->_type);
}

int			Enemy::getHP() const {
	return(this->_hp);
}

void	Enemy::takeDamage(int damage) {
	if (damage < 0) {
		return ;
	} else if (this->_hp <= damage) {
		this->_hp = 0;
	} else {
		this->_hp -= damage;
	}
}
