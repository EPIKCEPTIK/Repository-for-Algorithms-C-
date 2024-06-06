#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;

	int findEl;

	int temp = 0;
	while (true) {
		while (true) {
			cout << "What do you want?" << endl;
			cout << "1.Searching the element" << endl;
			cout << "2.Stop the program" << endl;
			int choise;
			cin >> choise;
			if (choise == 1) {
				break;
			}
			else if (choise == 2) {
				return 0;
			}
			else {
				cout << "Incorrect value, try again" << endl;
			}
		}
		

		
		while (true) {
			cout << "Enter the number of elements: ";
			cin >> size;
			if (size > 1) {
				break;
			}
			cout << "Try again" << endl;
		}

		int* arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 100;
		}

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp1 = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp1;
				}
			}
		}
		cout << "Array:" << endl;
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		while (true) {
			
			cout << "Enter an element: ";
			cin >> findEl;

			if (size <= 20) {
				int n = size;

				int result = -1;
				int l = 0;
				int r = n - 1;


				while (l <= r) {
					int mid = l + (r - l) / 2;


					if (arr[mid] == findEl) {
						result = mid;
						break;
					}


					if (arr[mid] < findEl) {
						l = mid + 1;
					}


					else {
						r = mid - 1;
					}
				}

				cout << "A binary search was used" << endl;
				if (result == -1) {
					cout << "Element not found";
				}

				else {
					cout << "Item found at position " << result << endl;
					
				}
			}




			else if (size > 20 && size <= 100) {
				int x = 0;
				int a = 0;
				int b = size - 1;
				bool found;

				for (found = false; (arr[a] < findEl) && (arr[b] > findEl) && !found; ) {
					x = a + ((findEl - arr[a]) * (b - a)) / (arr[b] - arr[a]);
					if (arr[x] < findEl) {
						a = x + 1;
					}
					else if (arr[x] > findEl) {
						b = x - 1;
					}
					else {
						found = true;
					}

				}
				cout << "Interpolation was used" << endl;
				if (arr[a] == findEl) {
					cout << findEl << " was found in the element " << a << endl;
				}
				else if (arr[b] == findEl) {
					cout << findEl << " was found in the element " << b << endl;
				}
				else if (arr[x] == findEl) {
					cout << findEl << " was found in the element " << x << endl;
				}
				else {
					cout << "It was not found" << endl;

				}

			}

			else {
				cout << "There are more than a hundred elements" << endl;

			}
			cout << "Do you want to enter another element?" << endl;
			cout << "Yes or Not"<<endl;
			string temp;
			cin >> temp;
			if (temp == "Not") {
				break;
			}
			
		}
	}
}


