#include <iostream>

double readNumber() {
	double number1 = 0.0;
	std::cin >> number1;
	return number1;
}

char readMathOperator() {
	char mathOperator = '+';
	std::cin >> mathOperator;
	return mathOperator;
}

void printResult(double number1, double number2, char mathOperator, double result) {
	std::cout << number1 << " " << mathOperator << " " << number2 << " is " << result << "\n";
}
