#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

void swapEl(int* arr, int i)
{
	int buff;
	buff = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = buff;
}
void myShakerSort(int* arr, int sizeArr)
{
	int leftMark = 1;
	int rightMark = sizeArr - 1;
	while (leftMark <= rightMark)
	{
		for (int i = rightMark; i >= leftMark; i--)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		leftMark++;


		for (int i = leftMark; i <= rightMark; i++)
			if (arr[i - 1] > arr[i]) swapEl(arr, i);
		rightMark--;

		cout << "\nІтерация: " << leftMark - 1; 
	}
}
void ArrR(int arr[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		arr[i] = rand() % 100;
	}
	
}
void CoutArr(int arr[], int sizeArr) {
	for (int k = 0; k < sizeArr; k++)
	{
		cout << arr[k] << " | ";
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int sizeArr;
	while (true) {
		cout << "Введіть розмір масиву: ";
		cin >> sizeArr;
		if (sizeArr > 1) {
			break;
		}
		else {
			cout << "Спробуйте ще раз" << endl;
		}
	}
	int* arr = new int [sizeArr];
	ArrR(arr, sizeArr);
	cout << "\nМасив до сортування:\n";
	CoutArr(arr, sizeArr);

	myShakerSort(arr, sizeArr); 

	cout << "\nМасив після сортування:\n";
	CoutArr(arr, sizeArr);
	
	for (int j = 0; j < sizeArr; j++) {
		
		   
			if (arr[j] % 2 == 0 && j <= sizeArr - 4) {
				int temp = arr[j];
				arr[j] = arr[j + 3];
				arr[j + 3] = temp;
			}
			else if (arr[j] % 2 == 0 && j > sizeArr - 4) {
				int temp = arr[j];
				arr[j] = arr[j - (sizeArr-3)];
				arr[j - (sizeArr - 3)] = temp;
			}
			else if (arr[j] % 2 != 0 && j < 3) {
				int temp = arr[j];
				arr[j] = arr[(sizeArr - 3) + j];
				arr[(sizeArr - 3) + j] = temp;
			}
			else if (arr[j] % 2 != 0 && j >= 3) {
				int temp = arr[j];
				arr[j] = arr[j-3];
				arr[j - 3] = temp;

			}
			cout << endl;
			CoutArr(arr, sizeArr);
			

		
		
	}
	cout << "\nМасив після сортування:\n";
	CoutArr(arr, sizeArr);
}
				
				
