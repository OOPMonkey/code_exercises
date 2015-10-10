#include <iostream>

double readNumber();
double parseOpertor(char mathOperator);
void printResult(double number1, double number2, char mathOperator, double result);

int main() {
	using std::cout;	
	using std::cin;
	
	cout << "Enter a floating point number: \n";
	double number1 = 0.0;
	cin >> number1;

	cout << "Enter a floating point number: \n";
	double number2 = 0.0;
	cin >> number2;

	cout << "Enter one of the following mathematical symbols +, -, * or /\n";
	char mathOperator = '+';
	cin >> mathOperator;

	double result = 0;
	if (mathOperator == '+')	
		result = number1 + number2;
	else if(mathOperator == '-')	
		result = number1 - number2;
	else if(mathOperator == '*')	
		result = number1 * number2;
	else if(mathOperator == '/')	
		result = number1 / number2;
	
	cout << number1 << " " << mathOperator << " " << number2 << " is " << result << "\n";

	return 0;
}
