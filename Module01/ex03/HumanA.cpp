/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:24:54 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 20:50:13 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Weapon.hpp"
#include "HumanA.hpp"

// ************************************************************************** //
//     Weapon stored as reference because HumanA allways should be armed      //                              //
// ************************************************************************** //

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	for (int i = 0; i < (int)this->_name.length(); i++)
		this->_name[i] = toupper(this->_name[i]);
	std::cout << this->_name << " attacks with his " <<  this->_weapon.getType() << std::endl;
}