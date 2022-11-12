/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenbajj <mbenbajj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:59:23 by mbenbajj          #+#    #+#             */
/*   Updated: 2022/11/11 18:58:07 by mbenbajj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// ************************************************************************** //
//                        Constructor and Destructor                          //
// ************************************************************************** //

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

// ************************************************************************** //
//                                  GETTERS                                   //
// ************************************************************************** //

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

// ************************************************************************** //
//                             DISPLAY FUNCTIONS                              //
// ************************************************************************** //

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			<< "total:" << Account::_totalAmount << ";"
			<< "deposits:" << Account::_totalNbDeposits << ";"
			<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	struct tm	tstruct;
	time_t		now = time(NULL);
	char		buff[30];
	
    tstruct = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buff << "] ";
}

// ************************************************************************** //
//                              MAKE FUNCTIONS                                //
// ************************************************************************** //

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "deposit:" << deposit << ";";
	this->_nbDeposits++;
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";"
			<< "nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	bool	check;
	
	check = true;
	if (withdrawal > this->_amount)
		check = false;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "withdrawal:";
	if (check)
	{
		std::cout << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		std::cout << "amount:" << this->_amount << ";"
			<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
	}
	else
		std::cout << "refused" << std::endl;
	return (check);
}
