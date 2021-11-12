/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:19:44 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:31 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45) {
	std::cout << "RobotomyRequestForm constructor has been called" << std::endl;

	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "RobotomyRequestForm destructor has been called" << std::endl;
}

void				RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() <= 150) {
		if (this->getGradeToSign() == 72 && this->getGradeToExec() == 45) {
			std::cout << GRAY << "Drrrrrrrrrrrrrr" << std::endl;
			std::cout << this->_target << " has been robotomized successfully 50% of the time" << WHITE << std::endl;
		}
		else
			throw RobotomyRequestForm::RequiredGradesException();
	}
	else
		throw RobotomyRequestForm::FormNotSignedException();
}