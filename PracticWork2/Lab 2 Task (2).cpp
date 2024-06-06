#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int size = 19;
	int arr[19];
	int flag = 0;
	int random;
	for (int i = 0; i < size; i++) {
		random = rand() % 2;
		

		if (random != 0) {
			arr[i] = -9 + rand() % 10;
		}
		else {
			arr[i] = rand() % 10;
		}
	}
	cout << "Initial array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			arr[i] = abs(arr[i]);
			flag++;
		}
	}
	if (flag > 0) {
		cout << "The final array:" << endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "There were no changes ";
	}
	




}