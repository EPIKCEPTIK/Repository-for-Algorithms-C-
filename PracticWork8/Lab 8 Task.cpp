#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {

	string text = "Etiam et ex imperdiet purus viverra gravida.Mauris gravida dignissim magna sit amet malesuada.Maecenas tortor nunc, aliquam ac tortor variussssss, volutpat efficitur lacus.Praesent turpis mi, vestibulum a nisi sit amet, aliquam faucibus ipsum.Cras rhoncus est mauris, eget sollicitudin arcu eleifend ac.Vivamus tempus tincidunt pharetra.Pellentesque molestie viverra libero nec faucibus.Duis scelerisque eleifend dapibus";
	string pattern;
	int coin = 0;
	cout << "Enter a pattern: ";
	getline(cin, pattern);
	cout  << "Pozition: ";
	string tempText = text;
	for (int i = 0; i < size(tempText); i++) {
		tempText[i] = tolower(tempText[i]);
	}
	string tempPattern = pattern;
	for (int i = 0; i < size(tempPattern); i++) {
		tempPattern[i] = tolower(tempPattern[i]);
	}
	for (int i = 0; i < size(text); i+=size(pattern)) {

		if (tempText.find(tempPattern, i) < size(tempText) && tempText.find(tempPattern, i) != tempText.find(tempPattern, i + 1)) {
		cout << tempText.find(tempPattern, i) << " ";
		coin++;
		}
	}

	cout << endl;
	cout << "Coincidences: " << coin << endl;
	int choise;
	cout << "Do you want to change searched words?"<<endl;
	cout << "1.Yes " << endl;
	cout << "2.No" << endl;
	cin >> choise;
	if (choise == 1) {
		string change;
		cout << "Enter: ";
		cin >> change;
		for (int i = 0; i < size(tempText); i += size(tempPattern)) {

			if (tempText.find(tempPattern, i) < size(tempText) && tempText.find(tempPattern, i) != tempText.find(tempPattern, i + 1)) {
				text.replace(tempText.find(tempPattern, i), size(tempPattern),change);
			}
		}
		for (int i = 0; i < size(text); i++) {
			cout << text[i];
		}
		cout << endl;
		
	}
	int temp = 0;
	for (int i = size(text) - 1; i > 0; i--) {
		
		if (text[i] == ' '|| text[i] == '.') {
			if (temp >= 7) {
				text.replace(i + 1, temp, pattern);
				temp = 0;
			}
			else {
				temp = 0;
			}
		}
		
		else if(text[i] != ','){
			temp++;
		}
		
		
	}
	cout << "Changed text: " << endl;
	for (int i = 0; i < size(text); i++) {
		cout << text[i];
	}
	cout << endl;

	

}