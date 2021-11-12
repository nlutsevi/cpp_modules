/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:27:04 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 20:50:25 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

// ************************************************************************** //
// Weapon stored as pointer because HumanB can be initialized without a weapon//                              //
// ************************************************************************** //

HumanB::HumanB(void) {
}

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB(void) {
};

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {
	for (int i = 0; i < (int)this->_name.length(); i++)
		this->_name[i] = toupper(this->_name[i]);
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}