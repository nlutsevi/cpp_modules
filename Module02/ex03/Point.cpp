/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:49:17 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/21 19:59:35 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point(void) : _x(0), _y(0) {}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}

Point::Point(Point const& src) {
	*this = src;
}

Point::~Point(void) {};


Point&		Point::operator=(Point const& src) {
	if (this != &src)
		*this = src;

	return *this;
}

Fixed const&	Point::getX(void) const {
	return this->_x;
}

Fixed const&	Point::getY(void) const {
	return this->_y;
}