#include <iostream>

int readNumber() {
	int number = 0;
	std::cin >> number;
	return number;
}

void writeAnswer(int answer) {
	std::cout << answer << std::endl;
}
