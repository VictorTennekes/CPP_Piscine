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

#include "Bureaucrat.hpp"
#include <iostream>

int    main(void)
{
    Bureaucrat bob("Bob", 149);
    Bureaucrat steve("Steve", 2);

    std::cout << bob << std::endl;
    std::cout << steve << std::endl;
    steve.incrGrade();
    try
    {
        steve.incrGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    bob.decrGrade();
    try
    {
        bob.decrGrade();
    }
    catch(const std::exception& d)
    {
        std::cerr << d.what() << std::endl;
    }
    std::cout << bob << std::endl;
    std::cout << steve << std::endl;
    return (0);
}
