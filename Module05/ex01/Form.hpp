/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:14:33 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:07:09 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string	const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int	const			_gradeToExec;
	public:
		Form(std::string const name, int const gradeToSign, int const gradeToExec);
		~Form(void);
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Grade introduced was too High ❗");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Grade introduced was too Low ❗");
				}
		};
		std::string const	getName(void) const;
		bool				getSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		void				beSigned(Bureaucrat const& b);
};

std::ostream&				operator<<(std::ostream& o, Form const& src);

#endif