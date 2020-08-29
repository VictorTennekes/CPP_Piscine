/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 13:05:27 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/27 13:05:27 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "contact.class.hpp"
#include "database.class.hpp"

int main(void) {
	std::string command;
	Database base;

	std::cout << "\033[37;01m/--- PHONEBOOK ---\\\033[0m" << std::endl;
	while (command.compare("EXIT")) {
		std::cout << "❯ ";
		std::getline(std::cin, command);
		if (!command.compare("ADD")) {
			if (base.Count() >= 8) {
				std::cerr << "Error: This phonebook can only contain 8 people" << std::endl;
				continue;
			}
			Contact person;

			person.Prompt();
			base.AddContact(person);
		} else if (!command.compare("SEARCH")) {
			base.List();
			if (!base.Count()) continue;
			std::string input;
			int	index;
			while (true) {
				std::cout << "Enter the index you would like to view: ";
				std::getline(std::cin, input);
				if (!std::cin.good()) break;
				std::stringstream convert(input);
				if (!(convert >> index) || index < 0 || index > base.Count()) {
					std::cerr << "Error: Wrong index given" << std::endl;
				} else {
					base.GetContact(index).Display();
				}
				break;
			}
		}
	}
	return (0);
}
