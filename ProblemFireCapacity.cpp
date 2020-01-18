/*
 * Logan Welsh
 * lwelsh@chapman.edu
 * CPSC-298-07
 * int2020-assign1
 * ProblemFireCapacity.cpp
 */

/*
 * Problem 2 (firecapacity):
 * Write a program that determines whether a meeting room
 * is in violation of fire law regulations regarding the maximum room capacity.
 *
 * The program will read in the maximum room capacity
 * and the number of people to attend the meeting.
 *
 * If the number of people is less than or equal to the maximum room capacity,
 * the program announces that it is legal to hold the meeting
 * and tells how many additional people may legally attend.
 *
 * If the number of people exceeds the maximum room capacity,
 * the program announces that the meeting cannot be held as planned due to fire regulations
 * and tells how many people must be excluded in order to meet the fire regulations.
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	// DECLARE VARIABLES
	int maxCap = 0;
	int numPeople = 0;
	int diff = 0;	// Difference; Maximum capacity - number of people attending.
	
	// GET INPUT FROM USER
	cout << "Maximum room capacity: ";
	cin >> maxCap;
	cout << "Number of people to attend the meeting: ";
	cin >> numPeople;
	
	// PERFORM CALCULATIONS
	diff = maxCap - numPeople;	// Both branches require calculating the difference. The difference can also be used to determine which branch to take.
	
	// OUTPUT RESULTS
	cout << endl;
	if (diff >= 0) {
		cout << "It is legal to hold the meeting." << endl;
		cout << diff << " additional people may attend." << endl;
	}
	else {
		cout << "The meeting cannot be held as planned due to fire regulations." << endl;
		cout << -diff << " people must be excluded in order to meet the fire regulations." << endl;
	}

	return 0;
}