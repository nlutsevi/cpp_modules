/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:36:44 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:22 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) {
	std::cout << "PresidentialPardonForm constructor has been called" << std::endl;

	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardonForm destructor has been called" << std::endl;
}

void				PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() <= 150) {
		if (this->getGradeToSign() == 25 && this->getGradeToExec() == 5) {
			std::cout << GRAY << this->_target << " has been pardoned by Zafod Beeblebrox" << WHITE << std::endl;
		}
		else
			throw PresidentialPardonForm::RequiredGradesException();
	}
	else
		throw
			PresidentialPardonForm::FormNotSignedException();
}
