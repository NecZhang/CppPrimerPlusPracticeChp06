#include <iostream>
#include <array>

using namespace std;

int main() {

	array<double, 10> donation;
	
	cout << "Enter up to 10 donations:\n";

	int i = 0;
	double sum = 0;
	
	while (cin >> (donation[i]) && i < 10) {
		sum = sum + donation[i];
		++i;
	}

	double avgDonation = sum / i;
	int count = 0;

	for (i = 0; i < 10 && donation[i] != 0; ++i) {
		if (donation[i] > avgDonation) {
			++count;
		}
	}
	cout << "The average donation is " << avgDonation << " and " << count << " donation(s) is(are) larger than average value." <<endl;

	return 0;
}