#include <iostream>
using namespace std;

//int sum(const int a, const int b);
//int sum(const int a, const int b, const int c);
//int sum(const int a, const int b, const int c, const int d);
double sum(const double a, const double b);
int sum(const int a, const int b, const int c = 0, const int d = 0); // Use default arguments for variable sums - 2 to 4 ints
//int sum(const int arr[], const int length);	// Iteratively sums an array of integers
int sum(const int arr[], const int length);		// Recursively sums an array of integers

int main(void) {
	int m = 3, n = 5, o = 7, p = 1;
	double i = 2.0, j = 3.0;
	int arr[] = { 1, 2, 3, 4, 5 };
	
	
	//cout << "Simple Integer Sum: " << sum(m, n) << endl;
	cout << "Simple Double Sum: " << sum(i, j) << endl;
	//cout << "Simple Sum of Three integers: " << sum(m, n, o) << endl;
	//cout << "Simple Sum of Four Integers: " << sum(m, n, o, p) << endl;
	
	cout << "Variable Sum (2): " << sum(m, n) << endl;
	cout << "Variable Sum(3): " << sum(m, n, o) << endl;
	cout << "Variable Sum(4): " << sum(m, n, o, p) << endl;
	cout << "Array Sum: " << sum(arr, 5) << endl;


	system("PAUSE");
	return 0;
}

/*
// Returns the sum of two integers - Overloaded
int sum(const int a, const int b) {
	return a + b;
}

// Returns the sum of three integers - Overloaded
int sum(const int a, const int b, const int c) {
	return a + b + c;
}

// Returns the sum of four integers - Overloaded
int sum(const int a, const int b, const int c, const int d) {
	return a + b + c + d;
}*/

// Returns the sum of two doubles - Overloaded
double sum(const double a, const double b) {
	return a + b;
}

// Returns the sum of 2 to 4 integers - Overloaded
int sum(const int a, const int b, const int c , const int d) {
	return a + b + c + d;
}

/*
// Returns the sum of a variable amount of integers stored in an array - Overloaded
int sum(const int arr[], const int length) {
	int sum = 0;

	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}

	return sum;
}*/

// Recursively sum an array of integers
int sum(const int arr[], const int length) {
	return length == 0 ? 0 : arr[0] + sum(arr + 1, length - 1);
}

