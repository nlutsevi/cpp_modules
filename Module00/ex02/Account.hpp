/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 00:45:14 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 17:53:52 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {

public:

	typedef Account		t;

	static int	getNbAccounts( void ); //done
	static int	getTotalAmount( void ); //done
	static int	getNbDeposits( void ); //done
	static int	getNbWithdrawals( void ); //done
	static void	displayAccountsInfos( void ); //done

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );
};

#endif /* __ACCOUNT_H__ */