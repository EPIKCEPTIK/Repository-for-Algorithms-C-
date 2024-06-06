#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int size = 19;
	int arr[19];
	int M;
	int size1 = 0;
	int temp = -1;
	for (int i = 0; i < size; i++) {
		arr[i] = ((0 - rand() % 5) + (0 + rand() % 5));
	}
	cout << "Initial array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Enter M: ";
	cin >> M;
	for (int i = 0; i < size; i++) {
		if (abs(arr[i]) > M) {
			size1++;
		}
	}

	if (size1 > 0) {
		int* arr1 = new int[size1];
		for (int i = 0; i < size; i++) {

			if (abs(arr[i]) > M) {
				temp++;
				arr1[temp] = arr[i];


			}
		}

		cout << "The final array:" << endl;
		for (int i = 0; i < size1; i++) {
			cout << arr1[i] << " ";
		}
		delete[] arr1;
	}
	else {
		cout << "No required numbers";
		return 0;
	}



}