/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:45:49 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:40 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137){
	std::cout << "SrubberyCreationForm constructor has been called" << std::endl;

	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "SrubberyCreationForm destructor has been called" << std::endl;
}

void		ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() <= 150) {
		if (this->getGradeToSign() == 145 && this->getGradeToExec() == 137) {
			std::ofstream outfile(this->_target + "_shrubbery");
			outfile << "                                   .         ;" << std::endl;
			outfile << "      .              .              ;%     ;;" << std::endl;
			outfile << "        ,           ,                :;%  %;" << std::endl;
			outfile << "         :         ;                   :;%;'     .," << std::endl;
			outfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
			outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
			outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
			outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
			outfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
			outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
			outfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
			outfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
			outfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
			outfile << "               `@%%. `@%%    ;@@%;" << std::endl;
			outfile << "                 ;@%. :@%%  %@@%;" << std::endl;
			outfile << "                   %@bd%%%bd%%:;" << std::endl;
			outfile << "                     #@%%%%%:;;" << std::endl;
			outfile << "                     %@@%%%::;" << std::endl;
			outfile << "                     %@@@%(o);  . '" << std::endl;
			outfile << "                     %@@@o%;:(.,'" << std::endl;
			outfile << "                 `.. %@@@o%::;" << std::endl;
			outfile << "                    `)@@@o%::;" << std::endl;
			outfile << "                     %@@(o)::;" << std::endl;
			outfile << "                    .%@@@@%::;" << std::endl;
			outfile << "                    ;%@@@@%::;." << std::endl;
			outfile << "                   ;%@@@@%%:;;;." << std::endl;
			outfile << "               ...;%@@@@@%%:;;;;,.." << std::endl;
			outfile << "" << std::endl;
			outfile << "------------------------------------------------" << std::endl;
			outfile.close();
		}
		else
			throw ShrubberyCreationForm::RequiredGradesException();
	}
	else
		throw ShrubberyCreationForm::FormNotSignedException();
}
