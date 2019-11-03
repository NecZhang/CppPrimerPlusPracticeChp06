#include <iostream>

using namespace std;

int main(){

	double income;
	double tax;
	cout << "Enter the income:\n";

	while (cin >> income && income >= 0) {
		if (income <= 5000) {
			tax = 0;
		}
		else if (income <= 15000 && income > 5000) {
			tax = 0.1 * (income - 5000);
		}
		else if (income <= 35000 && income > 15000) {
			tax = 0.15 * (income - 15000) + 0.1 * 10000;
		}
		else {
			tax = 0.2 * (income - 35000) + 0.15 * 20000 + 0.1 * 10000;
		}
		cout << "The tax is " << tax <<endl;
		cout << "The next one:\n";
	}

	return 0;
}