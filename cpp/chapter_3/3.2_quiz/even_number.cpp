#include <iostream>

bool isEven(int number);

int main() {
	using std::cout;

	cout << "Enter a number: ";
	int number = 0;
	std::cin >> number;

	if(isEven(number))
		cout << "Your number was even\n";
	else
		cout << "Your number was odd\n";

	return 0;	
}

bool isEven(int number) {
	return (number % 2) == 0;
}
