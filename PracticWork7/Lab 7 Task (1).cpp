#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {
	string text = "Hello.Hello.Hi.Good evening.";
	string pattern;
	int sizeText = size(text);
	for (int i = 0; i < sizeText; i++) {
		text[i] = toupper(text[i]);
	}
	int coin = 0;
	int sent = 0;
	cout << "Enter pattern: ";
	getline(cin, pattern);

	int sizePattern = size(pattern);
	for (int i = 0; i < sizePattern; i++) {
		pattern[i] = toupper(pattern[i]);
	}
	if (pattern.empty() != 1) {
		cout << "Pozition: ";
		for (int i = 0; i < sizeText - 1; i += sizePattern) {
			if (text.find(pattern, i) < sizeText && text.find(pattern, i) != text.find(pattern, i + 1)) {
				coin++;
				cout << text.find(pattern, i) << " ";
			}
		}
		cout << endl << "Coincudence: " << coin << endl;
		for (int i = 0; i < sizeText; i++) {
			if (text[i] == '.') {
				sent++;
			}
		}
		cout << "Number of letters: " << sizeText << endl;
		if (sent > 0) {
			cout << "Number of sentences: " << sent;
		}
		else {
			cout << "Ther is none sentence";
		}
	}
	else {
		cout << "Missing text or pattern, enter text and pattern first" << endl;
	}
}