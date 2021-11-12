/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 06:26:56 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 20:31:20 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int		main(void) {
	DiamondTrap D("Monster_Zombie");

	std::cout << "\nHitpoints before attack: " << D.getHitPoints() << std::endl;
	D.attack("oponent");
	std::cout << "Hitpoints after attack: " << D.getHitPoints() << std::endl << std::endl;

	std::cout << "Energy points before takeDamage: " << D.getEnergyPoints() << std::endl;
	D.takeDamage(5);
	std::cout << "Energy points after takeDamage: " << D.getEnergyPoints() << std::endl << std::endl;

	std::cout << "Energy points before being repaired: " << D.getEnergyPoints() << std::endl;
	D.beRepaired(3);
	std::cout << "Energy points before after repaired: " << D.getEnergyPoints() << std::endl << std::endl;

	D.whoAmI();
}