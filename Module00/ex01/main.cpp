/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:24:09 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 00:23:54 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "crappyPhoneBook.hpp"

int	main(int argc, char **argv) {
	Contact		instance_contact;
	PhoneBook 	instance_phoneBook;

	(void)argv;
	if (argc >= 1)
	{
		while (instance_phoneBook.option.compare("EXIT") != 0)
		{
			std::cout << "Choose an option: ADD or SEARCH (EXIT to close the Crappy Phone Book): " ;
			std::cin >> instance_phoneBook.option;
			if (instance_phoneBook.option.compare("ADD") == 0)
				instance_phoneBook.addContact();
			else if (instance_phoneBook.option.compare("SEARCH") == 0)
			{
				instance_phoneBook.printContact();
				instance_phoneBook.searchContact();
			}
		}
	}
}