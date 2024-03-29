/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:36:43 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/12 01:35:57 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

Karen::Karen (void) {};

Karen::~Karen (void) {};

void	Karen::debug (void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info (void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning (void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error (void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}


void	Karen::complain(std::string level) {
	std::string Sptr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*Fptr [4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	for (int i = 0; i < 4; i++) {
		if (Sptr[i] == level)
			(this->*Fptr[i])();
	}
}