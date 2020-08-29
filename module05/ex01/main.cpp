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

int main() {
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
}
