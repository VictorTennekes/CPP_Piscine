/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 20:31:35 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/07 20:31:35 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	std::srand(time(NULL));
	std::cout << "/	SIGNING		\\" << std::endl << std::endl;
    try {
        Bureaucrat victor("Victor", 3);
        std::cout << victor;
        victor.incrGrade();
        std::cout << victor;
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Bureaucrat steve("Steve", 2);
        std::cout << steve;
        steve.incrGrade();
        std::cout << steve;
        steve.incrGrade();
        std::cout << steve;
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Form dominosResignation("Dominos Resignation", 150, 150);
        Bureaucrat  thijs("Thijs", 1);

        std::cout << thijs;
        dominosResignation.beSigned(thijs);
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Form declarationOfIndependence("Declaration of Independence", 1, 1);
        Bureaucrat  griffin("Griffin", 50);

        std::cout << griffin;
        declarationOfIndependence.beSigned(griffin);
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Form declarationOfIndependence("Declaration of Independence", 1, 1);
        Bureaucrat  johnHancock("John Hancock", 1);

        std::cout << johnHancock;
        declarationOfIndependence.beSigned(johnHancock);
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        Form declarationOfIndependence("Declaration of Independence", 1, 1);
        Bureaucrat  johnHancock("John Hancock", 1);

        std::cout << johnHancock;
        declarationOfIndependence.beSigned(johnHancock);
        declarationOfIndependence.beSigned(johnHancock);
    } catch (const std::exception &error) {
        std::cerr << "Error: " << error.what() << std::endl;
    }

	std::cout << std::endl << "/	EXECUTING	\\" << std::endl << std::endl;
	try {
		PresidentialPardonForm	form("Steve");
		Bureaucrat				president("Zafod Beeblebrox", 1);

		std::cout << president;
		form.execute(president);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
    std::cout << std::endl;
	try {
		PresidentialPardonForm	form("Steve");
		Bureaucrat				president("Donald Trump", 100);

		std::cout << president;
		form.execute(president);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		RobotomyRequestForm	form("Steve");
		Bureaucrat			robot("Bender", 1);

		std::cout << robot;
		form.execute(robot);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
    std::cout << std::endl;
	try {
		RobotomyRequestForm	form("Steve");
		Bureaucrat			president("Donald Trump", 100);

		std::cout << president;
		form.execute(president);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		ShrubberyCreationForm	form("Longhorn Ranch");
		Bureaucrat				farmer("Charles the Farmer", 1);

		std::cout << farmer;
		form.execute(farmer);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
    std::cout << std::endl;
	try {
		ShrubberyCreationForm	form("White House");
		Bureaucrat				president("Donald Trump", 150);

		std::cout << president;
		form.execute(president);
	} catch (const std::exception &error) {
		std::cerr << "Error: " << error.what() << std::endl;
	}
}
