
/****************************************************************************
 * Project Euler - Problem 3												*
 *																			*
 * Description: The prime factors of 13195 are 5, 7, 13 and 29.				*
 *		What is the largest prime factor of the number 600851475143 ?		*
 *																			*
 * Programmed by Kyle Williams @ 23 December 2015							*
 ****************************************************************************/

#include <iostream>
using namespace std;

int main() {
	long long remainder = 600851475143;
	int curPrime = 2;

	while (remainder > 1) {
		if (remainder % curPrime == 0) {
			remainder /= curPrime;
		}
		else {
			curPrime++;
		}
	}

	cout << "largest prime: " << curPrime;
	cin.get();
}