/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 05:16:48 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 20:39:52 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat a("Normal", 10);
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;
	
	try {
		Bureaucrat b("Low", 200);
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat b("High", -15);
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat a("Normal", 10);
		a.incrementGrade(5);
		std::cout << "Grade: "<< a.getGrade() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat a("Normal", 10);
		a.incrementGrade(200);
		std::cout << "Grade: "<< a.getGrade() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat a("Normal", 10);
		a.decrementGrade(20);
		std::cout << "Grade: "<< a.getGrade() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowExeption& e){
		std::cout << "Exception: " << e.whate() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}