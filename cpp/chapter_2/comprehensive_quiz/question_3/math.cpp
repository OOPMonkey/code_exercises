
double performOperation(double number1, double number2, char mathOperator) {
	if (mathOperator == '+')	
		return number1 + number2;
	else if(mathOperator == '-')	
		return number1 - number2;
	else if(mathOperator == '*')	
		return number1 * number2;
	else if(mathOperator == '/')	
		return number1 / number2;
	else
		return 0;
}
