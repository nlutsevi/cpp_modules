/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:09:34 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:35 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string		_target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
		void				execute(Bureaucrat const& executor) const;
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Form cannot be signed because executor grade is too low ❌");
				}
		};
		class RequiredGradesException : public std::exception {
			public:
				virtual const char* whate() const throw() {
					return ("Robotomy failed. Supplied grades are not matching the required ❌");
				}
		};
};

#endif