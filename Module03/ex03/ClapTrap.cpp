/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 00:34:20 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 19:54:31 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) {
	std::cout << BLUE"Simple constructor has been called"WHITE << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << YELLOW << this->_name << " has been called"WHITE << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {
	std::cout << BLUE << this->_name << " has been destroyed" << WHITE << std::endl; 
}

ClapTrap&		ClapTrap::operator=(ClapTrap const& src) {
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();

	return *this;
}

std::string		ClapTrap::getName(void) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

unsigned int 	ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return this->_attackDamage;
}

void			ClapTrap::attack(std::string const& target) {
	std::cout << RED<< "ClapTrap " << this->_name << " attack " << target << ", causing 2 points of damage!" << WHITE << std::endl;
	this->_hitPoints--;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout << CYAN << "ClapTrap " << this->_name << " takes ";
	std::cout << amount;
	std::cout << " points of damage..." << WHITE << std::endl;
	this->_energyPoints -= amount;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout << GREEN << "ClapTrap " << this->_name << " has been repaired by ";
	std::cout << amount;
	std::cout << " points" << WHITE << std::endl;
	this->_energyPoints += amount;
}