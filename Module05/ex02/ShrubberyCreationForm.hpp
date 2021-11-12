/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:36:28 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/19 21:22:43 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
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
					return ("Tree wasn't created. Supplied grades are not matching the required ❌");
				}
		};
};


#endif