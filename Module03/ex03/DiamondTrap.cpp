/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 01:08:59 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 20:31:54 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << BLUE << "Default DiamondTrap constructor is called" << WHITE << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +  "_clap_name") {
	this->_name = name;
	this->FlagTrap::_hitPoints = this->FlagTrap::getHitPoints();
	this->ScavTrap::_energyPoints = this->ScavTrap::getEnergyPoints();
	this->FlagTrap::_attackDamage = this->FlagTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) {
	std::cout << YELLOW << "Copy constructor called" << WHITE << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << BLUE << "DiamondTrap " << this->_name << " has been destroyed" << WHITE << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src) {
	this->_name = src.FlagTrap::getName();
	this->FlagTrap::_hitPoints = src.FlagTrap::getHitPoints();
	this->ScavTrap::_energyPoints = src.ScavTrap::getEnergyPoints();
	this->FlagTrap::_attackDamage = src.FlagTrap::getAttackDamage();

	return *this;
}

void		DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void) {
	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl << std::endl;
}

