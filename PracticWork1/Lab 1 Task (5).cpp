#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	float sum = 0;
	while (true) {
		cout << "Enter the number of elements: ";
		cin >> size;
		if (size > 1) {
			break;
		}
	}
	float* arr = new float[size];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < size; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << "The end result: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

}