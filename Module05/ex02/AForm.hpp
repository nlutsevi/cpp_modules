/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:14:33 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:07:09 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		std::string	const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int	const			_gradeToExec;
	public:
		AForm(std::string const name, int const gradeToSign, int const gradeToExec);
		~AForm(void);
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
		virtual void		execute(Bureaucrat const& executor) const = 0;
};

std::ostream&				operator<<(std::ostream& o, AForm const& src);

#endif