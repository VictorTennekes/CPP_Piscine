/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:43:56 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/12 13:43:56 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <ctime>
#include <cstdlib>

int	main(void)
{
	Span span1(10);
	Span span2(20);
	std::vector<int> v;

	std::srand(time(NULL));
	v.push_back(std::rand());
	span2.addVect(v);
	std::cout << "\033[1;31mSPANNER 2\033[m" << std::endl;
	try{
		std::cout << "Shortest Span: " << span2.shortestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "Longest Span: " << span2.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[1;31mERROR CHECKING PROOF\033[m" << std::endl;
	std::cout << "v.size() = " << v.size() << std::endl;
	Span span3 = Span(15);
	try{
		span3.addVect(v);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	for (int i = 1; i < 20; i++){
		try{
			span3.addNumber(i);
			std::cout << i << std::endl;
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	Span span4(span3);
	try{
		span4 = Span(0); 
		span4.addNumber(1);
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "\033[1;31mSPAN CHECKING\033[m" << std::endl;
	std::vector<int> v2; v2.push_back(8); v2.push_back(2); v2.push_back(6);
	Span span5(4);
	span5.addVect(v2);
	try{
		std::cout << "Shortest Span: " << span5.shortestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << "Longest Span " << span5.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
