#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
    this->_accountIndex = this->getNbAccounts();
    Account::_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    Account::_totalAmount += this->_amount;

    Account::_displayTimestamp();
    std::cout << 
    "index:" << this->_accountIndex << 
    ";amount:" << this->_amount <<
    ";created" << std::endl;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    Account::_nbAccounts--;
    std::cout << 
    "index:" << this->_accountIndex << 
    ";amount:" << this->_amount <<
    ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout <<
    "accounts:" << Account::getNbAccounts() <<
    ";total:" << Account::getTotalAmount() <<
    ";deposits:" << Account::getNbDeposits() <<
    ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit( int deposit ) 
{
    int p_amount;

    p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;

    Account::_displayTimestamp();
    std::cout << 
    "index:" << this->_accountIndex << 
    ";p_amount:" << p_amount <<
    ";deposit:" << deposit <<
    ";amount:" << this->_amount <<
    ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{    
    int p_amount;

    Account::_displayTimestamp();
    p_amount = this->_amount;
    if (withdrawal > p_amount) {
        std::cout <<
        "index:" << this->_accountIndex << 
        ";p_amount:" << p_amount <<
        ";withdrawal:refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals += 1;
    Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
    
    
    std::cout <<
    "index:" << this->_accountIndex << 
    ";p_amount:" << p_amount <<
    ";withdrawal:" << withdrawal <<
    ";amount:" << this->_amount <<
    ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

void    Account::_displayTimestamp( void )
{
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;

    std::time_t time(std::time(0));
    std::tm *lt = std::localtime(&time);
    year = lt->tm_year + 1900;
    month = lt->tm_mon + 1;
    day = lt->tm_mday;
    hour = lt->tm_hour;
    min = lt->tm_min;
    sec = lt->tm_sec;
    // year = 1992;
    // month = 1;
    // day = 4;
    // hour = 9;
    // min = 15;
    // sec = 32;

    std::cout << "[" << year;
    if (month < 10)
        std::cout << "0";
    std::cout << month;
    if (day < 10)
        std::cout << "0";
    std::cout << day << "_";
    if (hour < 10) 
        std::cout << "0";
    std::cout << hour;
    if (min < 10) 
        std::cout << "0";
    std::cout << min;
    if (sec < 10) 
        std::cout << "0";
    std::cout << sec << "] ";
}

void    Account::displayStatus( void ) const
{
    Account::_displayTimestamp();

    std::cout << 
    "index:" << this->_accountIndex <<
    ";amount:" << this->_amount <<
    ";deposits:" << this->_nbDeposits <<
    ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

