/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 01:15:31 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/26 13:12:44 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int		main(int argc, char **argv) {
	if (argc == 2) {
		Conversion	c(static_cast<std::string const>(argv[1]));
		c.toChar();
		c.toInt();
		c.toFloat();
		c.toDouble();
	}
	else {
		std::cout << "Please introduce the value to be converted" << std::endl;
	}
}