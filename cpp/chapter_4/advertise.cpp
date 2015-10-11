#include <iostream>

struct AdvertiseInfo {
	int numberOfAds; 
	double clickPercentage;
	double averageEarned;
};

void printAdvertiseInfo(AdvertiseInfo advertiseInfo) {
	using std::cout;

	cout << "Number of ads: " << advertiseInfo.numberOfAds << "\n";
	cout << "Click percentage: " << advertiseInfo.clickPercentage << "\n";
	cout << "Average Earned: " << advertiseInfo.averageEarned << "\n";

	cout << "Amount made: " << advertiseInfo.numberOfAds * advertiseInfo.clickPercentage * advertiseInfo.averageEarned << "\n";

}

int main() {
	using std::cout;
	using std::cin;

	AdvertiseInfo advertiseInfo;

	cout << "How many ads were shown to readers: ";
	cin >> advertiseInfo.numberOfAds;

	cout << "Percentage of users that clicked on ads: ";
	cin >> advertiseInfo.clickPercentage;

	cout << "How much was earned on average: ";
	cin >> advertiseInfo.averageEarned;

	printAdvertiseInfo(advertiseInfo);
	return 0;
}
