/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:20:22 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 20:37:25 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(void) {
}

Weapon::Weapon(std::string weapon) {
	this->_weapon = weapon;
}

Weapon::~Weapon(void) {
}

void				Weapon::setType(std::string weapon) {
	this->_weapon = weapon;
}
std::string	const 	Weapon::getType(void) const {
	return this->_weapon; 
}