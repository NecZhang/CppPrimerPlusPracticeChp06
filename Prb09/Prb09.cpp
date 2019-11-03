#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

struct donateStrc {
	string name;
	double donation;
};

int main() {

	string fileName;
	ifstream readFile;
	cout << "Enter the name of text file: ";
	getline(cin, fileName);
	readFile.open(fileName);

	if (!readFile.is_open()) {
		cout << "Could open the file " << fileName << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}

	int num;
	(readFile >> num).get();
	donateStrc* pt = new donateStrc[num];

	for (int i = 0; i < num; ++i) {
		getline(readFile, pt[i].name);
		(readFile >> pt[i].donation).get();
	}

	cout << "Grand Patrons:\n";
	int count = 0;
	for (int j = 0; j < num; ++j) {
		if (pt[j].donation > 10000) {
			cout << pt[j].name << ": " << pt[j].donation << endl;
			++count;
		}
	}

	if (count == 0) {
		cout << "None\n";
	}

	cout << "Patrons:\n";
	count = 0;
	for (int j = 0; j < num; ++j) {
		if (pt[j].donation <= 10000 && pt[j].donation > 0) {
			cout << pt[j].name << ": " << pt[j].donation << endl;
			++count;
		}
	}

	if (count == 0) {
		cout << "None\n";
	}

	delete[] pt;


	return 0;
}