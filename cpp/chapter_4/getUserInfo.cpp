#include <iostream>
#include <string>

int main() {

	using std::cout;

	cout << "Enter your full name: ";
	std::string name;
	std::getline(std::cin, name);

	cout << "Enter your age: ";
	int age;
	std::cin >> age;

	double yearsPerLetter = static_cast<double>(age) / name.length();
	cout << "You've lived " << yearsPerLetter << " years for each letter in your name.\n";

	return 0;
}
