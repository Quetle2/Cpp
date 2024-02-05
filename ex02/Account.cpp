/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/05 18:56:57 by miandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
}

Account::~Account(void){

}

int	Account::getNbAccounts(void){
	return _nbAccounts;
}

int	Account::getTotalAmount(void){
	return _totalAmount;
}

int	Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void){
	
}

void	Account::makeDeposit(int deposit){
	
}

bool	Account::makeWithdrawal(int withdrawal){
	
}

int		Account::checkAmount(void)const{
	
}

void	Account::displayStatus(void)const{
	
}

void	Account::_displayTimestamp(void){
	
}