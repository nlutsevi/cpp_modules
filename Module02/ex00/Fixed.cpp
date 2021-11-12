/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:03:40 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/13 23:17:46 by nlutsevi         ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

void	Fixed::setRawBits(int const raw) {
	 this->_n = raw;
}