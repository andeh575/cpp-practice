// Read a number N from the user and then find the first N primes
// Prime: an integer greater than 1 that is only divisible by itself and 1
#include <iostream>
#include <cmath>
using namespace std;

void findPrimes(int);	// Find N primes

int main(void) {
	int num;

	cout << "Given a number N, display the first N primes" << endl;
	cout << "How many primes do you want to find? ";
	cin >> num;

	// So long as the user wants at least one prime number
	if (num >= 1)
		findPrimes(num);
	else
		cout << "No Primes to find..." << endl;

	system("PAUSE");
	return 0;
}

// Find the first num primes
void findPrimes(int num) {
	bool isPrime;

	cout << "First " << num << " Primes are: " << endl;

	// So long as we haven't found num primes
	for (int i = 2; num > 0; ++i) {

		isPrime = true;
		// See if i is divisible by j 
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) {
				isPrime = false;	// i was divisible by j
				break;				// Stop searching since we know i isn't prime
			}
		}
		if (isPrime) {
			--num;					// We've found one of num primes
			cout << i << endl;
		}
	}
}