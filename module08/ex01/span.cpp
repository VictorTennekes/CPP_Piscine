/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:43:54 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/08/12 13:43:54 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int capacity) : container(), capacity(capacity) {}

Span::Span(const Span &src) {
	*this = src;
}

Span	&Span::operator=(const Span &src) {
	this->container = src.container;
	this->capacity = src.capacity;
	return (*this);
}

Span::~Span() {}

void	Span::addVect(std::vector<int> vector) {
	for (unsigned int i = 0; i < vector.size(); i++) {
		this->container.push_back(vector[i]);
	}
}

void	Span::addNumber(int num) {
	if (this->container.size() >= capacity)
		throw std::length_error("Your container cannot exceed it's max capacity");
	this->container.push_back(num);
}

#include <iostream>
int		Span::shortestSpan() {
	if (this->container.size() <= 1)
		throw std::runtime_error("Not enough numbers to call longestSpan");
	int res = 0;
	std::vector<int>::iterator it = this->container.begin();
	for(; it < this->container.end(); it++) {
		std::vector<int>::iterator itSec = this->container.begin();
		for (; itSec < this->container.end(); itSec++) {
			if (itSec == it) continue;
			int localRes = *it - *itSec;
			if (localRes < 0) localRes = localRes * -1;
			if (res == 0 || res > localRes) {
				res = localRes;
			}
		}
	}
	return (res);
}


int		Span::longestSpan() {
	if (this->container.size() <= 1)
		throw std::runtime_error("Not enough numbers to call longestSpan");
	int min = *std::min_element(this->container.begin(), this->container.end());
	int max = *std::max_element(this->container.begin(), this->container.end());
	return (max - min);
}
