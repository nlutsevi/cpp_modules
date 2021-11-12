/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:21:03 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:07:03 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const gradeToSign, int const gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "AForm constructos has been called" << std::endl;

	if (this->_gradeToSign < 1 || this->_gradeToExec < 1)
		AForm::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		AForm::GradeTooLowException();
}

AForm::~AForm(void) {
	std::cout << "AForm destructor has been called" << std::endl;
}

std::string const		AForm::getName(void) const {
	return this->_name;
}

bool					AForm::getSigned(void) const {
	return this->_signed;
}

int						AForm::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int						AForm::getGradeToExec(void) const {
	return this->_gradeToExec;
}

void					AForm::beSigned(Bureaucrat const& b) {
	if (b.getGrade() <= this->_gradeToSign)
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void					AForm::execute(Bureaucrat const& executor) const {
	(void)executor;
}

std::ostream&				operator<<(std::ostream& o,AForm const& src) {
	o << "AForm: " << src.getName() << ", signed: " << src.getSigned() << " with signed grade of " << src.getGradeToSign() << " and execution grade of " << src.getGradeToExec() << std::endl;

	return o;
}