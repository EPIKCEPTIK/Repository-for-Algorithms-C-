#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;

void ArrCout(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		cout << setw(3) << arr[i];
	}
}
int SortArr(int arr[], int N) {
	int min = 0;
	int buf = 0;
	for (int i = 0; i < N; i++)
	{
		min = i;

		for (int j = i + 1; j < N; j++)
			min = (arr[j] < arr[min]) ? j : min;

		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}
	return 0;
}
void ArrElements(int arr[], int N) {
	for (int i = 0; i < N; i++) {

		arr[i] = rand() % 100;

	}
}
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	while (true) {
		cout << "¬вед≥ть к≥льк≥сть елемент≥в: ";
		cin >> N;

		if (N > 0) {
			break;
		}
	}
	int*arr = new int [N];
	ArrElements(arr, N);
	
	
	cout << "ѕочаткова матриц€: " << endl;
	ArrCout(arr, N);
	cout << endl;
	 
	SortArr(arr, N);
	
	
	cout << " ≥нцева матриц€: " << endl;
	ArrCout(arr, N);
	cout << endl;
}
