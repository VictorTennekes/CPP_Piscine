/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/09 15:46:20 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/09 15:46:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("Presedential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) {
	if ((unsigned int)executor.getGrade() <= this->getExecGrade()) {
		executor.executeForm(*this);
		std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
	} else {
		throw Form::FormCantBeExecuted();
	}
}
