/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign1
 * ProblemEmployeePay.cpp
 */

/*
 * Problem 3 (employeepay):
 * An employee is paid at a rate of $16.00 per hour for regular hours worked in a week.
 * Any hours over that are paid at the overtime rate of one and one-half times that.
 * From the worker’s gross pay,
 * 	6% is withheld for Social Security tax,
 * 	14% is withheld for federal income tax,
 * 	5% is withheld for state income tax,
 * 	and $10 per week is withheld for medical insurance.
 *
 * Write a program that will read in the number of hours worked in a week as input
 * and that will then output
 * 	the worker’s gross pay,
 * 	each withholding amount,
 * 	and the net take-home pay for the week.
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	const double WAGE = 16.00;
	const int REG_HRS = 40;
	
	const double SOC_SEC_TAX = 0.06;
	const double FED_INC_TAX = 0.14;
	const double STA_INC_TAX = 0.05;
	const double MED_INSURANCE = 10.00;

	int hoursWorked = 0;
	int overtime = 0;
	double grossPay = 0;
	double withholding = 0;
	double takeHome = 0;
	
	
	// GET INPUT FROM USER
	cout << "Hours worked in a week: ";
	cin >> hoursWorked;
	
	
	// PERFORM CALCULATIONS
	if (hoursWorked > REG_HRS) {
		overtime = hoursWorked - REG_HRS;
	}
	
	grossPay = ((hoursWorked - overtime) * WAGE) + ((overtime) * (WAGE * 1.5));

	withholding = (grossPay * (SOC_SEC_TAX + FED_INC_TAX + STA_INC_TAX)) + MED_INSURANCE;

	takeHome = grossPay - withholding;
	

	// OUTPUT RESULTS
	cout << endl;
	cout << "Gross pay: $" << grossPay << endl;
	cout << "Withholding amount: $" << withholding << endl;
	cout << "Net take-home pay: $" << takeHome << endl;

	return 0;
}

