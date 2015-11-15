#include <iostream>
#include <string>

enum class Animal {
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

std::string getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);


int main() {
	
	printNumberOfLegs(Animal::CAT);
	printNumberOfLegs(Animal::CHICKEN);
	return 0;
}


std::string getAnimalName(Animal animal) {
	switch(animal) {
		case Animal::PIG:
			return "Pig";
		case Animal::GOAT:
			return "Goat";
		case Animal::CAT:
			return "Cat";
		case Animal::DOG:
			return "Dog";
		case Animal::CHICKEN:
			return "Chicken";
		case Animal::OSTRICH:
			return "Ostrich";
		default:
			return "invalid";
	}
}


void printNumberOfLegs(Animal animal) {
	int numberOfLegs;
	switch(animal) {
		case Animal::PIG:
		case Animal::GOAT:
		case Animal::CAT:
		case Animal::DOG:
			numberOfLegs = 4;
			break;
		case Animal::CHICKEN:
		case Animal::OSTRICH:
			numberOfLegs = 2;
			break;
		default:
			std::cout << "Invalid animal" << "\n";
			return;
	}

	std::string name = getAnimalName(animal);
	std::cout << "A " << name << " has " << numberOfLegs << " legs.\n";
}
