/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:24:58 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 20:26:02 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

int 	main(void) {
	FlagTrap Z1("Zombie1");

	std::cout << "\nHitpoints before attack: " << Z1.getHitPoints() << std::endl;
	Z1.attack("oponent");
	std::cout << "Hitpoints after attack: " << Z1.getHitPoints() << std::endl << std::endl;

	std::cout << "Energy points before takeDamage: " << Z1.getEnergyPoints() << std::endl;
	Z1.takeDamage(10);
	std::cout << "Energy points after takeDamage: " << Z1.getEnergyPoints() << std::endl << std::endl;

	std::cout << "Energy points before being repaired: " << Z1.getEnergyPoints() << std::endl;
	Z1.beRepaired(15);
	std::cout << "Energy points before after repaired: " << Z1.getEnergyPoints() << std::endl << std::endl;

	std::cout << "Energy points before High Fives: " << Z1.getEnergyPoints() << std::endl;
	Z1.highFivesGuys();
	std::cout << "Energy points after High Fives: " << Z1.getEnergyPoints() << std::endl << std::endl;

	return 0;
}