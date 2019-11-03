#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

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

	char ch;
	int count = 0;
	readFile.get(ch);

	while (readFile.good()) {
		if (!isspace(ch)) {
			++count;
		}
		readFile.get(ch);
	}

	cout << "There are " << count << " charactors in the text file." << endl;

	return 0;
}