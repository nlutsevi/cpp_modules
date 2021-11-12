/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 02:05:44 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/26 13:09:40 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string const& s) : _s(s) {}

Conversion::~Conversion(void) {}

void		Conversion::toChar(void) {
	int num;

	if ((isdigit(this->_s.c_str()[0]) == false) && (this->_s.length() == 1)) {
		std::cout << "char: " << static_cast<char>(this->_s.c_str()[0]) << std::endl;
	}
	else {
		try {
			num = static_cast<int>(std::stoi(this->_s));
			if ((num >= 0 && num <= 31) || num == 127)
				std::cout << "char: Non displayable" << std::endl;
			else {
				std::cout << "char: " << static_cast<char>(num) << std::endl;
			}
		}
		catch(std::invalid_argument& e) {
			std::cout << "char: impossible" << std::endl;
		}
		catch(std::out_of_range& e) {
			std::cout << "char: not displayable" << std::endl;
		}
	}
}

void		Conversion::toInt(void) {
	int		num;
	try {
		num = static_cast<int>(std::stoi(this->_s));
		std::cout << "int: " << num << std::endl;
	}
	catch(std::invalid_argument& e) {
		std::cout << "int: impossible" << std::endl;
	}
	catch(std::out_of_range& e) {
		std::cout << "int: Non displayable" << std::endl;
	}
}

void		Conversion::toFloat(void) {
	try {
		float f = static_cast<float>(std::stof(this->_s));
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch(std::invalid_argument& e) {
		std::cout << "float: impossible" << std::endl;
	}
	catch(std::out_of_range& e) {
		std::cout << "float: Non displayable" << std::endl;
	}
}

void		Conversion::toDouble(void) {
	try {
		double d = static_cast<double>(std::stod(this->_s));
		std::cout << "double: " << d << std::endl;
	}
	catch(std::invalid_argument& e) {
		std::cout << "double: impossible" << std::endl;
	}
	catch(std::out_of_range& e) {
		std::cout << "double: Non displayable" << std::endl;
	}
}