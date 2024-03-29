/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miandrad <miandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:24:26 by miandrad          #+#    #+#             */
/*   Updated: 2024/02/16 13:31:30 by miandrad         ###   ########.fr       */
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
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
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
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;


}

void	Account::makeDeposit(int deposit){
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (_amount - withdrawal < 0){
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << "refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	return true;
}

int		Account::checkAmount(void)const{
	return _amount;
}

void	Account::displayStatus(void)const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
	time_t ttime;
	struct tm	*ttm;
	char str[18];
	
	time(&ttime);
	ttm = localtime(&ttime);
	strftime(str, 19, "[%Y%m%d_%H%M%S] ", ttm);
	std::cout << str << std::flush;
}