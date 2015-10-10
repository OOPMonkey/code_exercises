#include <iostream>

int doubleNumber(int number);

int main() {
	using namespace std;
	cout << "Enter a number to double:" << endl;
	int number = 0;
	cin >> number;

	cout << "Your number doubled is: " << doubleNumber(number) << endl;
	return 0;
}

int doubleNumber(int number) {
	return number * 2;
}
