#include <iostream>


int sumTo(int num);

int main() {
	for(int i = 0; i <= 20; ++i) {
		if ((i % 2) == 0)
			std::cout << i << "\n";
	}

	int number = 5;
	std::cout << "Sum of " << number << " is " << sumTo(number) << "\n";

	return 0;
}


int sumTo(int num) {
	int sum = 0;

	for(int i = 1; i <= num; ++i)
		sum += i;

	return sum;
}
