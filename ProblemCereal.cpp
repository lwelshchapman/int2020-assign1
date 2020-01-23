/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign1
 * ProblemCereal.cpp
 */

/*
 * Problem 1 (cereal):
 * A metric ton is 35,273.92 ounces.
 * 
 * Write a program that will read the weight of a package of breakfast cereal in ounces
 * and output the weight in metric tons
 * as well as the number of boxes needed to yield one metric ton of cereal.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	const double OZ_IN_TON = 35273.92;
	double weightOz = 0.0;
	double weightTons = 0.0;
	int boxesNeeded = 0;	// This program assumes whole boxes are used.
	
	// GET INPUT FROM USER
	cout << "Cereal box weight (in ounces): ";
	cin >> weightOz;

	// PERFORM CALCULATIONS
	weightTons = weightOz / OZ_IN_TON;
	boxesNeeded = OZ_IN_TON / weightOz;

	// CHECK IF EXTRA BOX IS NEEDED
	if ((weightTons * boxesNeeded) < 1.0) {	// If there is a little more weight needed to yield a ton, count the extra weight as one extra box needed.
		boxesNeeded += 1;
	}
	
	// OUTPUT RESULTS
	cout << endl;
	cout << "Weight in metric tons: " << weightTons << endl;
	cout << "Boxes needed to yield one metric ton: " << boxesNeeded << endl;

	return 0;
}