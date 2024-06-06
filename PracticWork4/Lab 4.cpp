#include <iostream>
using namespace std;
int main() {
	const int N = 10;
	int arr[N];
	int rra[N];
	int n = sizeof(arr) / sizeof(arr[0]);
	int fEl;
	int result = -1;

	for (int i = 0; i < N; i++) {
		cout << "Enter an element: ";
		cin >> arr[i];
	}
	cout << "Enter a value: ";
	cin >> fEl;
	int l = 0, r = n - 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp1 = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp1;
			}
		}
	}
	while (l <= r) {
		
		int mid = l + (r - l) / 2;
		cout << "The left border of the array: " << l << endl;
		cout << "The right border of the array: " << r << endl;
		cout << "The middle of the array: "<<mid<<endl;
		
		if (arr[mid] == fEl) {
			result = mid;
			break;
		}

		if (arr[mid] < fEl)
			l = mid + 1;

		
		else
			r = mid - 1;
	}
	int temp = -1;
	for (int i = 0; i < N-1; i++) {
		if (arr[i] > arr[i + 1]) {
			temp++;
		}
	}
	for (int i = 0; i < N; i++) {
		rra[i] = arr[N - 1 - i];
	}
	cout << "Reverse array: " << endl;
	for (int i = 0; i < N; i++) {
		cout << rra[i] << " ";
	}
	cout << endl;
	if (result == -1) cout << "Element didnt found"<<endl;
	else  cout << "Element found in " << result << endl;
	if (temp == -1) {
		cout << "Array is sorted"<< endl;
	}
	else {
		cout << "Array is'nt sorted" << endl;
	}
	
	if (N % 2 == 0) {
		cout <<arr[(N/2)-1]<<" " << arr[N / 2] << endl;
	}
	else {
		cout << arr[N / 2] << endl;
	}
	return 0;
}
