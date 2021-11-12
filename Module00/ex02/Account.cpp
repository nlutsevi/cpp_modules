/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 01:05:52 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 19:40:37 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip> 
#include <chrono>
#include "Account.hpp"

// ************************************************************************** //
//                               Non-member attributes                        //
// ************************************************************************** //

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ************************************************************************** //
//                               Simple constructor                           //
// ************************************************************************** //

Account::Account(void) {
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_totalNbDeposits = 0;
	this->_nbWithdrawals = 0;
}

// ************************************************************************** //
//                               Deposit constructor                          //
// ************************************************************************** //

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount = Account::_totalAmount + initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

// ************************************************************************** //
//                               Destructor                                   //
// ************************************************************************** //

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	this->_accountIndex = this->_nbAccounts--;
}

// ************************************************************************** //
//                               Non-member functions                         //
// ************************************************************************** //

int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp(void) {
	time_t now = time(0);

	tm ltm = *localtime(&now);
	std::cout << std::setfill('0') << "[" << (ltm.tm_year + 1900)
			  << std::setw(2) << ltm.tm_mon + 1
			  << std::setw(2) << ltm.tm_mday << "_"
			  << std::setw(2) << ltm.tm_hour
			  << std::setw(2) << ltm.tm_min
			  << std::setw(2) << ltm.tm_sec << "] ";
}

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// ************************************************************************** //
//                               Member functions                             //
// ************************************************************************** //

void Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal) {
		std::cout << "withdrawal:refused" << std::endl;
		return 1;
	}
	else {
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return 0;
	}
}
