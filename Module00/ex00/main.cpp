/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:11:05 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/25 02:28:00 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "megaphone.hpp"

int		main(int argc, char **argv)
{
	Megaphone instance;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc == 2)
	{
		for (int i = 1; i < argc; ++i)
		{
			instance.setWord(argv[i]);
			instance.getWord();
		}
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			instance.setWord(argv[i]);
			instance.getWord2();
		}
	}
	return 0;	
}