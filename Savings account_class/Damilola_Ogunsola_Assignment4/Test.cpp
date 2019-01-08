//created by Damilola Ogunsola 
//Date: 06/27/2018

#include <iostream>
#include "SavingsAccount.h" // this includes the class definition
using namespace std;


int main()
{
	double interest1; //variable to store interest for saver 1
	double interest2; //variable to store interest for saver 2
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	//interest rate is 3%
	SavingsAccount::modifyInterestRate(3.0);

	interest1 = saver1.calculateMonthlyInterest();
	interest2 = saver2.calculateMonthlyInterest();
	
	cout << "New Balance(saver1): $" << saver1.getBalance() << endl;
	cout << "New Balance(saver2): $" << saver2.getBalance() << endl;

	//interest rate is 4%
	SavingsAccount::modifyInterestRate(4.0);

	interest1 = saver1.calculateMonthlyInterest();
	interest2 = saver2.calculateMonthlyInterest();

	cout << "New Balance(saver1): $" << saver1.getBalance() << endl;
	cout << "New Balance(saver2): $" << saver2.getBalance() << endl;
	
	system("pause");
}