/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign1
 * ProblemInflation.cpp
 */

/*
 * Problem 4 (inflation):
 * It is difficult to make a budget that spans several years, because prices are not stable.
 * If your company needs 200 pencils per year, you cannot simply use this year’s price
 * as the cost of pencils two years from now.
 * Because of inflation the cost is likely to be higher than it is today.
 *
 * Write a program to gauge the expected cost of an item in a specified number of years.
 *
 * The program asks for
 * 	the cost of the item,
 * 	the number of years from now that the item will be purchased,
 * 	and the rate of inflation.
 *
 * The program then outputs the estimated cost of the item after the specified period.
 *
 * Have the user enter the inflation rate as a percentage, such as 5.6 (percent).
 *
 * Your program should then convert the percentage to a fraction, such as 0.056,
 * and should use a loop to estimate the price adjusted for inflation.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	double nowCost = 0.0;
	double futCost = 0.0;
	double infRate = 0.0;
	int years = 0;

	
	// GET INPUT FROM USER
	cout << "Cost of item: ";
	cin >> nowCost;
	cout << "Number of years from now when item will be purchased: ";
	cin >> years;
	cout << "Percentage rate of inflation (example: 5.6): ";
	cin >> infRate;
	
	
	// PERFORM CALCULATIONS
	infRate *= .01;	// Convert inflation rate from whole number to percentage
	
	futCost = nowCost;
	
	for(int i = 0; i < years; ++i) {
		futCost *= (1 + infRate);	// Calculating the future cost using compound interest
	}
	
	
	// OUTPUT RESULTS
	cout << "After " << years << " years, the cost will be $" << futCost << "." << endl;

	return 0;
}