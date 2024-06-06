#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {
	int choice;
	string text;
	string textPlus;
	
	string pattern;

	while (true) {
		cout << "What do you want?" << endl;
		cout << "1.Enter a text" << endl;
		cout << "2.Enter a patter" << endl;
		cout << "3.Start finding" << endl;
		cout << "0.Finish the program" << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter a text : ";
			getline(cin, textPlus);
			getline(cin, textPlus);
			
			text.append(textPlus);
			text.append(" ");
			cout << text << endl;
			break;
			
		}

		case 2: {
			cout << "Enter a patter: ";
			getline(cin, pattern);
			getline(cin, pattern);
			break;
		}

		case 3: {
			int coin = 0;
			if (text.empty() != 1 && pattern.empty() != 1) {
				string tempText = text;
				for (int i = 0; i < size(tempText); i++) {
					tempText[i] = tolower(tempText[i]);
				}
				for (int i = 0; i < size(pattern); i++) {
					pattern[i] = tolower(pattern[i]);
				}
				cout << "Pozition: ";
				for (int i = 0; i < size(tempText); i += size(pattern)) {
					if (tempText.find(pattern, i) < size(tempText) && tempText.find(pattern, i) != tempText.find(pattern, i + 1)) {
						coin++;
						cout << tempText.find(pattern, i) << " ";
					}
				}
				
				cout << endl << "Coincudence: " << coin << endl;
				
			}
			else {
				cout << "Missing text or pattern, enter text and pattern first" << endl;
			}
			break;
		}

		case 0: {
			return 0;
		}
		default: {
			cout << "Invalid value, please, try again" << endl;
			break;
		}
		}
	}



}
