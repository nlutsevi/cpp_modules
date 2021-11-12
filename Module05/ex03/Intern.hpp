/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 23:37:16 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:25:23 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	private:
		bool	_exist;
		AForm*	makeShrubbery(std::string const& target);
		AForm*	makeRobotomy(std::string const& target);
		AForm*	makePresidential(std::string const& target);
	public:
		Intern(void);
		~Intern(void);
		AForm*				makeForm(std::string const& form, std::string const& target);
		class FormNotFoundException : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("The form you ask to fill is not found in the database ‼️");
				}
		};
};

#endif