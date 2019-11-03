#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

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



	return 0;
}