#include <iostream>

using namespace std;

int main() {

	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore\tp) pianist\n";
	cout << "t) tree     \tg) game\n";

	char choice;
	cin.get(choice).get();
	
	while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g') {
		cout << "Please enter a c, p, t or g: ";
		cin.get(choice).get();
	}

	switch (choice){
	case 'c':
		cout << "Carnivore is great!" << endl;
		break;
	case 'p':
		cout << "KK want to be a pianist." << endl;
		break;
	case 't':
		cout << "Maple is a tree." << endl;
		break;
	case 'g':
		cout << "I have not play games for a long time." << endl;
		break;	
	}

	return 0;
}