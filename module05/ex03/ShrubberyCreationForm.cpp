/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 15:46:20 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/09 15:46:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) {
	if ((unsigned int)executor.getGrade() <= this->getExecGrade()) {
		executor.executeForm(*this);
		std::string sysCall("tree . > \"" + this->target + std::string("_shrubbery") + "\"");
		std::cout << "A shrubbery has been installed at <" << this->target << ">" << std::endl;
		system(sysCall.c_str());
	} else {
		throw Form::FormCantBeExecuted();
	}
}
