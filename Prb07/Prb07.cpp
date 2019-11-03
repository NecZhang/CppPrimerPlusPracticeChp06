#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {

	cout << "Enter words (q to quit):\n";
	char ch;
	string word;
	int numVowel = 0;
	int numConsonant = 0;
	int numOther = 0;
	(cin >> word).get();
	ch = word[0];
	while (word.length() != 1 || ch != 'q') {
		if (isalpha(ch)) {
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				++numVowel;
			}
			else {
				++numConsonant;
			}
		}
		else {
			++numOther;
		}
		(cin >> word).get();
		ch = word[0];
	}

	cout << numVowel << " words beginning with vowels\n";
	cout << numConsonant << " words beginning with consonants\n";
	cout << numOther << " others\n";

	return 0;
}