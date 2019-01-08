//created by Damilola Ogunsola 
//Date: 06/27/2018
//Savings account class
/*In this class, a static data member annualInterestRate was used to store the annual interest rate for each of the savers.  
Each member of the class contains a private data member savingsBalance indicating the amount the saver currently has on deposit.  */

#include <iostream>
using namespace std;

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount
{
public:
	
	SavingsAccount(double amount);
	static void modifyInterestRate(double amount);
	double calculateMonthlyInterest();
	double getBalance() { 
		return savingsBalance;
	}

private:
	static double annualInterestRate; //static data member to store annual interest rate
	double savingsBalance;
};


#endif // !SAVINGSACCOUNT_H
