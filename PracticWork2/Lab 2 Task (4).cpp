#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int sizeF;
	int sizeS;
	int sizeT;
	int temp = 0;
	while (true) {
		cout << "Enter the number of elements of the first array: ";
		cin >> sizeF;
		cout << "Enter the number of elements of the second array: ";
		cin >> sizeS;
		if (sizeF > 0 && sizeS > 0) {
			break;
		}
		else {
			cout << "Incorrect value" << endl;
		}
	}
	sizeT = sizeF + sizeS;
	int* arrF = new int[sizeF];
	int* arrS = new int[sizeS];
	int* arrT = new int[sizeT];
	for (int i = 0; i < sizeF; i++) {
		arrF[i] = rand() % 10;
	}
	for (int i = 0; i < sizeS; i++) {
		arrS[i] = rand() % 10;
	}
	for (int i = 0; i < sizeF; i++) {
		arrT[i] = arrF[i];
	}
	for (int i = sizeF; i < sizeT; i++) {

		arrT[i] = arrS[temp];
		temp++;
	}
	for (int i = 0; i < sizeT; i++) {
		for (int j = 0; j < sizeT - 1; j++) {
			if (arrT[j] > arrT[j + 1]) {
				temp = arrT[j];
				arrT[j] = arrT[j + 1];
				arrT[j + 1] = temp;

			}
		}
	}
	cout << "First array: ";
	for (int i = 0; i < sizeF; i++) {
		cout << arrF[i] << " ";

	}
	cout << endl;

	cout << "Second array: ";
	for (int i = 0; i < sizeS; i++) {
		cout << arrS[i] << " ";

	}
	cout << endl;
	cout << "Third array: ";
	for (int i = 0; i < sizeT; i++) {
		cout << arrT[i] << " ";

	}
	cout << endl;



}