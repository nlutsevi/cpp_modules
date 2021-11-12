/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 00:08:02 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/18 01:28:47 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int		main(void) {
	Bureaucrat b("Phil", 100);
	Intern someRandomIntern;
	AForm* rrf;

	try {
		rrf = someRandomIntern.makeForm("shrubbery creation", "home");
		rrf->execute(b);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->execute(b);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		rrf = someRandomIntern.makeForm("presidential pardon", "Juan Carlos");
		rrf->execute(b);
	}
	catch (std::exception const& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}