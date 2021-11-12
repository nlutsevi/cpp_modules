/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:54:35 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/25 02:08:31 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "megaphone.hpp"

Megaphone::Megaphone(void) {
	return;
}

Megaphone::~Megaphone(void) {
	return;
}

void			Megaphone::getWord(void) const {
	std::cout << this->_word << std::endl;
}

void			Megaphone::getWord2(void) const {
	std::cout << this->_word << " ";
}

void			Megaphone::setWord(std::string word) {
	this->_word = Megaphone::captalizeString(word);
	return;
}

std::string		Megaphone::captalizeString(std::string s) const {
	for (unsigned long i = 0; i < s.length(); i++)
		s[i] = std::toupper(s[i]);

	return s;
}


