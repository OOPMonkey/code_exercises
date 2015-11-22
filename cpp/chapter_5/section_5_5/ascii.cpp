#include <iostream>

void printCharWithCode(char character);

int main() {
	bool done = false;
	char character = 'a';

	while(!done) {
		printCharWithCode(character);
		++character;
		done = character > 'z';
	}

	return 0;
}


void printCharWithCode(char character) {
	std:: cout << character << ": " << static_cast<int>(character) << "\n";
}
