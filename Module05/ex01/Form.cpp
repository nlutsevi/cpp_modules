/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:21:03 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:07:03 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "Form constructos has been called" << std::endl;

	if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		Form::GradeTooLowException();
}

Form::~Form(void) {
	std::cout << "Form destructor has been called" << std::endl;
}

std::string const		Form::getName(void) const {
	return this->_name;
}

bool					Form::getSigned(void) const {
	return this->_signed;
}

int						Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int						Form::getGradeToExec(void) const {
	return this->_gradeToExec;
}

void					Form::beSigned(Bureaucrat const& b) {
	if (b.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream&				operator<<(std::ostream& o,Form const& src) {
	o << "Form: " << src.getName() << ", signed: " << src.getSigned() << " with signed grade of " << src.getGradeToSign() << " and execution grade of " << src.getGradeToExec() << std::endl;

	return o;
}