/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:36:30 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 20:21:59 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {
	std::cout << BLUE << "Simple ScavTrap constructor has bbeen called" << WHITE << std::endl;
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap " << this->_name << " has been called" << WHITE << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << BLUE << "Scavtrap " << this->_name << " has been destroyed" << WHITE << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();

	return *this;
};

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl << std::endl;
}