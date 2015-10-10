#include <iostream>
#include "io.h"

int main() {
	using namespace std;

	cout << "Enter a number:" << endl;
	int number1 = readNumber();

	cout << "Enter another number:" << endl;
	int number2 = readNumber();

	cout << "Answer: ";
	writeAnswer(number1 + number2);
}

