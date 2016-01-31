#include <iostream.h>

int factorial(int);

void main(void) {
	int number;
	
	cout << "Please enter a positive integer: ";
	cin >> number;
	if (number < 0)
		cout << "That is not a positive integer.\n";
	else
		cout << number << " factorial is: " << factorial(number) << endl;
}

int factorial(int number) {
	int temp;

	if(number <= 1) return 1;

	temp = number * factorial(number - 1);
	return temp;
}
