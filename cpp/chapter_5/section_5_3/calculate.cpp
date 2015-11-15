#include <iostream>

int calculate(int num1, int num2, char mathOperator);

int main() {
	std::cout << calculate(2, 2, '+') << "\n";
	std::cout << calculate(2, 2, '-') << "\n";
	std::cout << calculate(2, 2, '/') << "\n";
	std::cout << calculate(2, 2, '*') << "\n";
	return 0;
}

int calculate(int num1, int num2, char mathOperator) {
	switch (mathOperator) {
		case '+':
			return num1 + num2;
		case '-':
			return num1 - num2;
		case '/':
			return num1 / num2;
		case '*':
			return num1 * num2;
		default:
			std::cout << "Invalid operator!";
			return 0;
	}
}
