/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:11:57 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 20:24:36 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FlagTrap::FlagTrap(void) {
	std::cout << BLUE << "Simple FlagTrap constructor has been called" << WHITE << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << YELLOW << "FlagTrap " << this->_name << " has been called" << WHITE << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const& src) {
	std::cout << "ScavTrap copy constructor has been called" << std::endl;
	*this = src;
}

FlagTrap::~FlagTrap(void) {
	std::cout << BLUE << "Flagtrap destructor has been called" << WHITE << std::endl;
}

FlagTrap&		FlagTrap::operator=(FlagTrap const& src) {
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();

	return *this;
}

void			FlagTrap::highFivesGuys(void) {
	std::cout << "Give me Five ✋" << std::endl;
	this->_energyPoints--;
}