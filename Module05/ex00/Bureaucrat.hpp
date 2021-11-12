/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 00:08:42 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 20:40:07 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>

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
};
	std::ostream& 	operator<<(std::ostream& o, Bureaucrat const& src);

#endif