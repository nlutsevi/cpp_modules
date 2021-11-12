/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:03:40 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/21 20:01:11 by nlutsevi         ###   ########.fr       */
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

// ************************************************************************** //
//                               Comparison operators                         //
// ************************************************************************** //

bool	Fixed::operator>(Fixed const& rhs) const{
	return (this->_n > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const& rhs) const{
	return (this->_n < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const& rhs) const{
	return (this->_n >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const& rhs) const{
	return (this->_n <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const& rhs) const{
	return (this->_n == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const& rhs) const{
	return (this->_n != rhs.getRawBits());
}

// ************************************************************************** //
//                               Arithmetic operators                         //
// ************************************************************************** //

Fixed	Fixed::operator+(Fixed const& rhs) {
	return Fixed(this->_n + rhs.getRawBits());
}

Fixed	Fixed::operator-(Fixed const& rhs) {
	return Fixed(this->_n - rhs.getRawBits());
}

Fixed	Fixed::operator*(Fixed const& rhs) {
	Fixed 	tmp = *this;
	long	aux1, aux2;

	aux1 = (long)this->getRawBits();
	aux2 = (long)rhs.getRawBits();

	tmp.setRawBits((aux1 * aux2) / (1 << this->_nbits)); 

	return tmp;
}

Fixed	Fixed::operator/(Fixed const& rhs) {
	Fixed	tmp = *this;
	long	aux1, aux2;

	aux1 = (long)this->getRawBits();
	aux2 = (long)rhs.getRawBits();

	tmp.setRawBits((aux1 * (1 << this->_nbits)) / aux2);

	return tmp;
}

// ************************************************************************** //
//                     Inrement and decrement operators                       //
//	Prefix increment, Postfix increment, prefix decrement, postfix ddecrement //
// ************************************************************************** //

Fixed&	Fixed::operator++(void) {
	this->_n++;
	return *this;
}

Fixed	Fixed::operator++(int raw) {
	Fixed tmp = *this;

	(void)raw;
	++*this;
	return tmp;
}

Fixed&	Fixed::operator--(void) {
	this->_n--;
	return *this;
}

Fixed	Fixed::operator--(int raw) {
	Fixed tmp = *this;

	(void)raw;
	--*this;
	return tmp;
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

int				Fixed::getRawBits(void) const {
	return this->_n;
}

void			Fixed::setRawBits(int const raw) {
	 this->_n = raw;
}

float			Fixed::toFloat(void) const {
	return ((float)this->_n / (float)(1 << this->_nbits));
}

int				Fixed::toInt(void) const {
	return (this->_n / (1 << this->_nbits));
}

Fixed&			Fixed::min(Fixed& n1, Fixed& n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

Fixed const&	Fixed::min(Fixed const& n1, Fixed const& n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

Fixed&			Fixed::max(Fixed& n1, Fixed& n2) {
	if (n1 < n2)
		return n2;
	else
		return n1;
}

Fixed const&	Fixed::max(Fixed const& n1, Fixed const& n2) {
	if (n1 < n2)
		return n2;
	else
		return n1;
}

// ************************************************************************** //
//                               Non-member functions                         //
// ************************************************************************** //

std::ostream&	operator<<(std::ostream& o, Fixed const& i) {
	o << i.toFloat();

	return o;
}

Fixed&			min(Fixed& n1, Fixed& n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

Fixed const&	min(Fixed const& n1, Fixed const& n2) {
	return (Fixed::min(n1, n2));
}

Fixed&			max(Fixed& n1, Fixed& n2) {
	if (n1 < n2)
		return n2;
	else
		return n1;
}

Fixed const&	max(Fixed const& n1, Fixed const& n2) {
	return (Fixed::max(n1, n2));
}