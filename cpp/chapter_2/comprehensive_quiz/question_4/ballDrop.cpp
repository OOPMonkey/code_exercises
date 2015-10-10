#include <iostream>
#include "constants.h"

void reportBallStatus(double initialHeight, double seconds);
double calculateDistance(double seconds);
void printBallHeight(double seconds, double height);

int main() {
	using std::cout;

	cout << "Enter the initial height of the tower in meters:";
	double initialHeight = 0;
	std::cin >> initialHeight;

	reportBallStatus(initialHeight, 0);
	reportBallStatus(initialHeight, 1);
	reportBallStatus(initialHeight, 2);
	reportBallStatus(initialHeight, 3);
	reportBallStatus(initialHeight, 4);
	reportBallStatus(initialHeight, 5);

	return 0;
}

void reportBallStatus(double initialHeight, double seconds) {
	double height = initialHeight - calculateDistance(seconds);
	if (height < 0)
		height = 0;

	printBallHeight(seconds, height);
}

double calculateDistance(double seconds) {
	return myConstants::GRAVITY * (seconds * seconds) / 2;
}

void printBallHeight(double seconds, double height) {
	std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
}


