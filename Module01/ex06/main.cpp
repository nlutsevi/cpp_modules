/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 01:06:09 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/12 01:33:03 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int		main (int argc, char **argv) {
	Karen k;
	if (argc == 2)
	{
		int		i;
		std::string	Sptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		for (i = 0; i < 4; i++) {
			if (Sptr[i] == argv[1])
				break;
		}
		switch(i) {
			case 0:
				for (int i = 0; i < (int)Sptr[0].length(); i++)
					Sptr[0][i] = toupper(Sptr[0][i]);
				std::cout << "[ " << Sptr[0] << " ]" << std::endl;
				k.complain(Sptr[0]);
				std::cout << "" << std::endl;
			case 1:
				for (int i = 0; i < (int)Sptr[1].length(); i++)
						Sptr[1][i] = toupper(Sptr[1][i]);
				std::cout << "[ " << Sptr[1] << " ]" << std::endl;
				k.complain(Sptr[1]);
				std::cout << "" << std::endl;
			case 2:
				for (int i = 0; i < (int)Sptr[2].length(); i++)
						Sptr[2][i] = toupper(Sptr[2][i]);
				std::cout << "[ " << Sptr[2] << " ]" << std::endl;
				k.complain(Sptr[2]);
				std::cout << "" << std::endl;
			case 3:
				for (int i = 0; i < (int)Sptr[3].length(); i++)
						Sptr[3][i] = toupper(Sptr[3][i]);
				std::cout << "[ " << Sptr[3] << " ]" << std::endl;
				k.complain(Sptr[3]);
				std::cout << "" << std::endl;
				break;
			default:
				std::cout << "Probably complaining about insignificant problems" << std::endl;
		}
	}
	else
		std::cout << "Introduce one argument" << std::endl;
}