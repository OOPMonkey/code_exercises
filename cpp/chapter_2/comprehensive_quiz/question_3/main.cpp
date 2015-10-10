#include <iostream>
#include "io.h"
#include "math.h"

int main() {
	using std::cout;	
	using std::cin;

	cout << "Enter a floating point number: \n";
	double number1 = readNumber();

	cout << "Enter a floating point number: \n";
	double number2 = readNumber();

	cout << "Enter one of the following mathematical symbols +, -, * or /\n";
	char mathOperator = readMathOperator();

	double result = performOperation(number1, number2, mathOperator);
	printResult(number1, number2, mathOperator, result);

	return 0;
}
