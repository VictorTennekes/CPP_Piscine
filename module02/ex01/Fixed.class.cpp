/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 18:13:13 by vtenneke      #+#    #+#                 */
/*   Updated: 2020/07/29 18:13:13 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int intValue) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = intValue * (1 << this->_fracBits);
}

Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(floatValue * (1 << this->_fracBits));
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return(*this);
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float	Fixed::toFloat() const {
	return (float(this->_value) / (1 << this->_fracBits));
}

int		Fixed::toInt() const {
	return (this->_value / (1 << this->_fracBits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}
