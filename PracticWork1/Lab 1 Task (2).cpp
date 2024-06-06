#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int N = 3;
	int arr[N];
	for (int i = 0; i < N; i++) {
		arr[i] = 1 + rand() % 20;
	}
	int minN = -1;
	int maxN = -1;
	cout << "Numbers: ";
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		if (arr[i] % 2 == 0) {
			minN = arr[i];
		}
		else {
			maxN = arr[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (arr[i] % 2 == 0 && arr[i] < minN && minN != -1) {
			minN = arr[i];
		}
		else if (arr[i] % 2 != 0 && arr[i] > maxN && maxN != -1) {
			maxN = arr[i];
		}
	}
	if (minN == -1) {
		cout << "There are no even numbers" << endl;
	}
	else {
		cout << "Minimum even number: " << minN << endl;
	}
	if (maxN == -1) {
		cout << "There are no odd numbers " << endl;
	}
	else {
		cout << "Maximum odd number: " << maxN << endl;
	}

}