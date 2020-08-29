/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 20:01:20 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 20:01:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName()) {
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src) {
	this->setGrade(src.getGrade());
	return (*this);
}

std::string	Bureaucrat::getName() const {
	return (this->name);
}

int			Bureaucrat::getGrade() const {
	return (this->grade);
}

void		Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void		Bureaucrat::incrGrade() {
	this->setGrade(this->getGrade() - 1);
}

void		Bureaucrat::decrGrade() {
	this->setGrade(this->getGrade() + 1);
}


Bureaucrat::~Bureaucrat() {
	std::cout << "The Bureaucrat died behind his desk" << std::endl;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return("Bureaucrat grade can not be higher than 1");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return("Bureaucrat grade can not be lower than 150");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl;
	return (out);
}
