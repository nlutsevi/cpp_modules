/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 21:35:20 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:26 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string		_target;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
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
					return ("You are not pardoned. Supplied grades are not matching the required ❌");
				}
		};
};

#endif