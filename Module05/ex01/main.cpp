/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:42:22 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/22 20:44:17 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void) {
	try {
		Bureaucrat b("Marta", 20);
		Form f("P&L", 10, 10);
		b.signForm(f);
	}
	catch (Form::GradeTooHighException& e){
		std::cout << "Exeption: " << e.whate() << std::endl;
	}
	catch (Form::GradeTooLowException& e){
		std::cout << "Exeption: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b2("Paul", 5);
		Form f("P&L", 10, 10);
		b2.signForm(f);
	}
	catch (Form::GradeTooHighException& e){
		std::cout << "Exeption: " << e.whate() << std::endl;
	}
	catch (Form::GradeTooLowException& e){
		std::cout << "Exeption: " << e.whate() << std::endl;
	}

	return 0;
}