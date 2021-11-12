/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:53:02 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/17 23:34:12 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int 	main(void) {
	try {
		Bureaucrat b("Maxim", 100);
		ShrubberyCreationForm f1("office");
		f1.execute(b);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b2("Anna", 100);
		RobotomyRequestForm f2("Marvin");
		f2.execute(b2);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		Bureaucrat b3("Carlos", 100);
		PresidentialPardonForm f3("President");
		f3.execute(b3);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}