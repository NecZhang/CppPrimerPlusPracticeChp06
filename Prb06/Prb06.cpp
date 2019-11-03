#include <iostream>
#include <string>

using namespace std;

struct donateStrc {
	string name;
	double donation;
};

int main(){

	int num;
	cout << "How many people in the unin: ";
	(cin >> num).get();
	donateStrc* pt = new donateStrc[num];
	
	for(int i = 0; i < num; ++i){
		cout << "Enter the name: ";
		getline(cin, pt[i].name);
		cout << "Enter the donation: ";
		(cin >> pt[i].donation).get();
	}
	
	cout << "Grand Patrons:\n";
	int count = 0;
	for (int j = 0; j < num; ++j) {
		if (pt[j].donation > 1000) {
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
		if (pt[j].donation <= 1000 && pt[j].donation > 0) {
			cout << pt[j].name << ": " << pt[j].donation << endl;
			++count;
		}
	}

	if (count == 0) {
		cout << "None\n";
	}

	delete [] pt;

	return 0;
}