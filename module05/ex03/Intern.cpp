/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 17:49:28 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/09 17:49:28 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {
	std::cout << "A minion appeared!" << std::endl;
}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern	&Intern::operator=(const Intern &src) {
	(void)src;
	return (*this);
}

Intern::~Intern() {}

Form	*Intern::makeForm(const std::string &name, const std::string &target) {
	static const char *formNames[3] = {
		"Shrubbery Creation",
		"Robotomy Request",
		"Presedential Pardon"
	};
	int formID = -1;
	for (unsigned int i = 0; i < 3; i++) {
		if (name.find(formNames[i]) != std::string::npos) {
			formID = i;
			break ;
		}
	}
	if (formID != -1) {
		switch (formID) {
			case 0: return (new ShrubberyCreationForm(target));
			case 1: return (new RobotomyRequestForm(target));
			case 2: return (new PresidentialPardonForm(target));
		}
	}
	throw Intern::InvalidFormType();
	return (NULL);
}

const char	*Intern::InvalidFormType::what() const throw() {
	return ("Invalid form type");
}
