#include <iostream>

using namespace std;

struct bop {
	char fullname[20];
	char title[20];
	char bopname[20];
	int perference;
};

int main() {

	bop programmer[3]{
		{"Nec Zhang", "Sir", "Nec", 0},
		{"KK Lee", "Supreme title", "KK", 1},
		{"Bob Z", "Jr", "Bob", 2}
	};

	cout << "Benevolent Order of Programmers Report\n";
	cout << "a. display by name   \tb. display by title\n";
	cout << "c. display by bopname\td. display by preference\nq. quit\n";

	cout << "Enter your choice: ";
	char choice;
	cin.get(choice).get();

	while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'q') {
		cout << "Please enter a, b, c, d or q: ";
		cin.get(choice).get();
	}

	while (choice != 'q') {
		switch (choice)
		{
		case 'a':
			for (int i = 0; i < 3; ++i) {
				cout << programmer[i].fullname << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < 3; ++i) {
				cout << programmer[i].title << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < 3; ++i) {
				cout << programmer[i].bopname << endl;
			}	
			break;
		default:
			for (int i = 0; i < 3; ++i) {
				switch (programmer[i].perference)
				{
				case 0:
					cout << programmer[i].fullname << endl;
					break;
				case 1:
					cout << programmer[i].title << endl;
					break;
				case 2:
					cout << programmer[i].bopname << endl;
					break;
				}
			}
			break;
		}
		cout << "Next choice:";
		cin.get(choice).get();
	}

	cout << "Bye!";

	return 0;
}