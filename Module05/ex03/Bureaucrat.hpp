/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:08:42 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/28 20:16:54 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include "AForm.hpp"

# define YELLOW "\033[1;33m"
# define GREEN  "\033[1;32m"
# define BLUE   "\033[1;34m"
# define PINK   "\033[1;35m"
# define GRAY   "\033[1;30m"
# define CYAN   "\033[1;36m"
# define RED    "\033[1;31m"
# define WHITE  "\033[0;37m"

class AForm;

class Bureaucrat {
	private:
		std::string const 	_name;
		int 				_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);

		std::string				getName(void) const;
		int						getGrade(void) const;
		void					incrementGrade(int x);
		void					decrementGrade(int x);
		class GradeTooHighExeption : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Grade introduced was too high ❗️");
				}
		};
		class GradeTooLowExeption : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Grade introduced was too low ❗️");
				}
		};
		void					signForm(AForm& form) const;
		void					executeForm(AForm const& form);
};
	std::ostream& 	operator<<(std::ostream& o, Bureaucrat const& src);

#endif