//created by Damilola Ogunsola 
//Date: 06/27/2018

#include <iostream>
#include "SavingsAccount.h" // this includes the class definition
using namespace std;


//member function definition
SavingsAccount::SavingsAccount(double amount)
{
	savingsBalance = amount;
}

double SavingsAccount::annualInterestRate = 0; // annual interest rate initialized to zero

double SavingsAccount::calculateMonthlyInterest()
{

	double interest; // variable for the monthly interest
	interest = (savingsBalance * annualInterestRate / 12);
	savingsBalance = savingsBalance + interest;
	return interest;
	
}

void SavingsAccount::modifyInterestRate(double amount)
{
	annualInterestRate = amount / 100; //convertint to double
}