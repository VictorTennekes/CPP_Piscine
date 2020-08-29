/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/08 16:40:11 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/08 16:40:11 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, unsigned int signGrade, unsigned int execGrade) :
	name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1) {
		throw Form::GradeTooHighException();
	} else if (signGrade > 150 || execGrade > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::~Form() {}

std::string		Form::getName() const {
	return (this->name);
}

bool			Form::getSign() const {
	return (this->isSigned);
}

unsigned int	Form::getSignGrade() const {
	return (this->signGrade);
}

unsigned int	Form::getExecGrade() const {
	return (this->execGrade);
}

void			Form::beSigned(Bureaucrat &bureaucrat) {
	if (this->isSigned == true) throw Form::FormAlreadySigned();
	if ((unsigned int)bureaucrat.getGrade() <= this->signGrade) {
		this->isSigned = true;
	}
	bureaucrat.signForm(*this);
}

const char	*Form::GradeTooHighException::what() const throw() {
	return("Form grade can not be higher than 1");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return("Form grade can not be lower than 150");
}

const char	*Form::FormAlreadySigned::what() const throw() {
	return("A form that has been signed can't be signed again");
}

const char	*Form::FormCantBeExecuted::what() const throw() {
	return("This form can't be executed by this bureaucrat");
}

std::ostream	&operator<<(std::ostream &out, const Form &form) {
	out << "Form <" << form.getName() << "is currently <" << ((form.getSign() == true) ? "signed" : "unsigned")
	<< ">, requires a grade of <" << form.getSignGrade() << "> to get signed and a grade of <"
	<< form.getExecGrade() << "> to get executed." << std::endl;
	return (out);
}
