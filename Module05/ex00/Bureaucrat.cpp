/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:46:14 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/28 20:08:11 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Bureaucrat default constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor has been called" << std::endl;

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat destructor has been called" << std::endl;
}

std::string				Bureaucrat::getName(void) const {
	return this->_name;
}

int						Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void					Bureaucrat::incrementGrade(int x) {
	this->_grade -= x;

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
}

void					Bureaucrat::decrementGrade(int x) {
	this->_grade += x;

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
}

std::ostream&			operator<<(std::ostream& o, Bureaucrat const& src) {
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;

	return o;
}