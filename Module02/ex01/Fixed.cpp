/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:03:40 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/14 20:17:01 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// ************************************************************************** //
//                               Default constructor                          //
// ************************************************************************** //


Fixed::Fixed(void) : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

// ************************************************************************** //
//                               Copy constructor                             //
// ************************************************************************** //

Fixed::Fixed(Fixed const& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const raw) : _n(round(raw * (1 << this->_nbits))) {

	std::cout << "Int constructor is called" << std::endl;
}

Fixed::Fixed(float const raw) : _n(round(raw * (1 << this->_nbits))) {
	std::cout << "Float destructor is called" << std::endl;
}

// ************************************************************************** //
//                               Destructor                                   //
// ************************************************************************** //

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
};

// ************************************************************************** //
//                               Assignation operator                         //
// ************************************************************************** //

Fixed&	Fixed::operator=(Fixed const& rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const {
	return this->_n;
}

void	Fixed::setRawBits(int const raw) {
	 this->_n = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_n / (float)(1 << this->_nbits));
}

int		Fixed::toInt(void) const {
	return (this->_n / (1 << this->_nbits));
}

std::ostream&	operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();

	return o;
}