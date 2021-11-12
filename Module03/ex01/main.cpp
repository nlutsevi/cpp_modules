/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:48:20 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 19:56:26 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main (void) {
	ScavTrap Z1("Zombie1");

	std::cout << "\nHitpoints before attack: " << Z1.getHitPoints() << std::endl;
	Z1.attack("oponent");
	std::cout << "Hitpoints after attack: " << Z1.getHitPoints() << std::endl << std::endl;

	std::cout << "Energy points before takeDamage: " << Z1.getEnergyPoints() << std::endl;
	Z1.takeDamage(10);
	std::cout << "Energy points after takeDamage: " << Z1.getEnergyPoints() << std::endl << std::endl;

	std::cout << "Energy points before being repaired: " << Z1.getEnergyPoints() << std::endl;
	Z1.beRepaired(15);
	std::cout << "Energy points before after repaired: " << Z1.getEnergyPoints() << std::endl << std::endl;

	Z1.guardGate();

	return 0;
}