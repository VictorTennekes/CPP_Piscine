/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 15:46:20 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/09 15:46:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) {
	int chance = (std::rand() % 2);
	if (chance == 1 && (unsigned int)executor.getGrade() <= this->getExecGrade()) {
		executor.executeForm(*this);
		std::cout << "* rizzz rizzz rizzz *" << std::endl;
		std::cout << "<" << this->target << "> has been robotomized" << std::endl;
	} else if (chance == 0 && (unsigned int)executor.getGrade() <= this->getExecGrade()) {
		std::cerr << "Failed to robotomize <" << this->target << ">" << std::endl;
	} else {
		throw Form::FormCantBeExecuted();
	}
}
