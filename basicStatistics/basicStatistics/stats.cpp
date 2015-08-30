// A simple program that finds the mean, maximum, and minimum of an int[]

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>);
int findMin(vector<int>);
double findMean(vector<int>);

int main(void) {	

	vector<int> temp = { 1, 2, 3, 2, 5, 22 };
	int result;
	double result2;

	result = findMax(temp);
	cout << "Max: " << result << endl;
	result = findMin(temp);
	cout << "Min: " << result << endl;
	result2 = findMean(temp);
	cout << "Mean: " << result2 << endl;

	system("PAUSE");
	return 0;
}

// Given a vector of int values return the maximum
int findMax(vector<int> vals) {
	int size = vals.size();
	int max = vals[0];

	for (int i = 0; i < size; i++) {
		if (max < vals[i])
			max = vals[i];
	}

	return max;
}

// Given a vector of int values return the minimum
int findMin(vector<int> vals) {
	int size = vals.size();
	int min = vals[0];
	
	for (int i = 0; i < size; i++) {
		if (min > vals[i])
			min = vals[i];
	}

	return min;
}

// Given a vector of int values - return the mean
double findMean(vector<int> vals) {
	double mean;
	double sum = 0;;
	int size = vals.size();

	for (int i = 0; i < size; i++) {
		sum += vals[i];
	}

	sum = sum / size;

	return sum;
}