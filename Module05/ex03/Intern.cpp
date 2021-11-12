/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 23:42:24 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:25:25 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) : _exist(false) {
	std::cout << "Intern default constructor has been called" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "Intern destructor has been called" << std::endl;
}

AForm*			Intern::makeShrubbery(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

AForm*			Intern::makeRobotomy(std::string const& target) {
	return new RobotomyRequestForm(target);
}

AForm*			Intern::makePresidential(std::string const& target) {
	return new PresidentialPardonForm(target);
}

AForm*			Intern::makeForm(std::string const& form, std::string const& target) {
	std::string		Sptr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};


	AForm*		(Intern::*Fptr[3])(std::string const&) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};

	for (int i = 0; i < 3; i++) {
		if (Sptr[i] == form) {
			this->_exist = true;
			return (this->*Fptr[i])(target);
		}
	}

	if (this->_exist == false)
		throw Intern::FormNotFoundException();
	return 0;
}
