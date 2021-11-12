/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:00:37 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/12 01:23:18 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int		main(int argc, char **argv) {
	std::ifstream	ifs(argv[1]);
	std::string 	s1;
	std::string		s2;
	std::string		new_file = ".replace";
	std::string 	readout;

	if (argc < 4)
		std::cout << "Please introduce Filename as 1st argument and 2 NON Empty strings" << std::endl;
	else if (argc == 4)
	{
		std::ofstream	ofs(argv[1] + new_file);
		s1 =  argv[2];
		s2 = argv[3];
		if (s1.empty() || s2.empty())
			std::cout << "Please initialize with NON empty strings" << std::endl;
		if (!ifs)
			std::cout << "Couldn't open " << argv[1] << std::endl;
		if (!ofs)
			std::cout << "Couldn't open " << argv[1] + new_file << std::endl;
		while (getline(ifs, readout, ' ')) {
			if (readout == s1) {
				ofs << " " << s2;
			}
			else {
				ofs << " " << readout;
			}
		}
		ifs.close();
		ofs.close();
	}

}