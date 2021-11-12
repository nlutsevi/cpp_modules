/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyPhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:15:36 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 00:40:59 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "crappyPhoneBook.hpp"

Contact::Contact(void) {
	this->_pos = 0;
	return;
}

Contact::~Contact(void) {
	return;
}

void	Contact::getContact(void) const {
	std::cout << "Fisrt name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}

void	Contact::setContact(void) {
	std::cout << "Introduce first name: ";
	std::cin >> this->_first_name;
	std::cout << "Introduce last name: ";
	std::cin >> this->_last_name;
	std::cout << "Introduce nickname: ";
	std::cin >> this->_nickname;
	std::cout << "Introduce phone number: ";
	std::cin >> this->_phone;
	std::cout << "Introduce darkest secret: ";
	std::cin >> this->_secret;
}

std::string	Contact::getName(void) const {
	return this->_first_name;
}

std::string	Contact::getSurname(void) const {
	return this->_last_name;
}

std::string	Contact::getNick(void) const {
	return this->_nickname;
}

PhoneBook::PhoneBook(void) {
	this->_pos = 0;
	this->_search_pos = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::addContact(void) {
	if (this->_pos == 8)
		this->_pos = 0;
	this->_contacts[this->_pos].setContact();
	this->_pos++;
}

void	PhoneBook::searchContact(void) {
	std::cout << "Intoduce the position of the contact to be searched: ";
	std::cin >> this->_search_pos_str;
	this->_search_pos = std::atoi(this->_search_pos_str.c_str());
	if (this->_search_pos >= 0 && this->_search_pos < 8)
	{
		if (this->_contacts[this->_search_pos].getName().compare("") != 0)	
			this->_contacts[this->_search_pos].getContact();
		else
			std::cout << "No info saved in this index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void	PhoneBook::printContact(void) const {
	std::cout << std::endl;
	std::cout << "*************CRAPPY PHONE BOOK***************" << std::endl;
	std::cout << "*   Index  |   Name   |  Surname |   Nick   *" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_contacts[i].getName().compare("") != 0)
		{
			std::cout << "*" << std::setw (10);
			std::cout << i << "|";
			std::cout << std::setw (10);
			if (this->_contacts[i].getName().length() > 10)
				std::cout << this->_contacts[i].getName().replace(9, 20, ".") << "|";
			else
				std::cout << this->_contacts[i].getName() << "|";
			std::cout << std::setw (10);
			if (this->_contacts[i].getSurname().length() > 10)
				std::cout << this->_contacts[i].getSurname().replace(9, 20, ".") << "|";
			else
				std::cout << this->_contacts[i].getSurname() << "|";
			std::cout << std::setw (10);
			if (this->_contacts[i].getNick().length() > 10)
				std::cout << this->_contacts[i].getNick().replace(9, 20, ".") << "*" << std::endl;
			else
				std::cout << this->_contacts[i].getNick()  << "*" << std::endl;
  			// std::cout << this->_i_str.replace(9, 100, ".") << std::endl;
		}
	}
	std::cout << "*********************************************" << std::endl << std::endl;
}
