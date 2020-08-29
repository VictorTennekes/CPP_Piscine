/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   database.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:31:20 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/27 14:31:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "database.class.hpp"

Database::Database() {
	this->_count = 0;
}
Database::~Database(){}

int	Database::Count(void) const {
	return (this->_count);
}

void	Database::AddContact(Contact person) {
	this->_contacts[this->_count++] = person;
	return ;
}

Contact	Database::GetContact(int i) const {
	return (this->_contacts[i]);
}

void	DisplayField(std::string field, bool border) {
	if (field.length() > 10) {
		std::cout << field.substr(0, 9) + ".";
	} else {
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;
	}
	if (border == true) std::cout << '|';
}

void	Database::List(void) {
	DisplayField("Index", true);
	DisplayField("First Name", true);
	DisplayField("Last Name", true);
	DisplayField("Nickname", false);
	std::cout << std::endl;

	for (int i = 0; i < this->_count; i++) {
		Contact person = this->_contacts[i];
		DisplayField(std::to_string(i), true);
		DisplayField(person.GetField(0), true);
		DisplayField(person.GetField(1), true);
		DisplayField(person.GetField(2), false);
		std::cout << std::endl;
	}
	return ;
}
