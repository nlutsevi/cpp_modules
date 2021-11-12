/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 02:01:35 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/26 13:08:50 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>

class Conversion {
	private:
		std::string		_s;
	public:
		Conversion(std::string const& s);
		~Conversion(void);
		void	toChar(void);
		void	toInt(void);
		void	toFloat(void);
		void	toDouble(void);
};

#endif