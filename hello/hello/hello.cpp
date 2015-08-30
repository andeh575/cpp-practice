#include <iostream>
using namespace std;

int main(void) {
	unsigned int num, i;
	const char* hello = "Hello, world!";
	
	cout << "Enter number of hello repitions(int): ";
	cin >> num;

	cout << "For loop: " << endl;
	for (i = 0; i < num; i++) {
		cout << i + 1 << ": " << hello << endl;
	}

	cout << "While loop: " << endl;
	i = 0;

	while (i < num) {
		cout << i + 1 << ": " << hello << endl;
		i++;
	}

	cout << "Do While loop: " << endl;
	i = 0;

	do {
		cout << i + 1 << ": " << hello << endl;
		i++;
	} while (i < num);

	system("PAUSE");
	return 0;
}