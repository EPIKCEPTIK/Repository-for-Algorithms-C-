#include <iostream>
#include <Windows.h>
#include <time.h>
#include <iomanip>
using namespace std;
void ArrR(int mass[], int N) {
	for (int i = 0; i < N; i++) {
		mass[i] = rand() % 100;
	}
}
int shellSort(int arr[], int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i += 1)
		{
			if (arr[i]%2==0)
			{
				int temp = arr[i];

				int j;
				for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
					arr[j] = arr[j - gap];
				arr[j] = temp;
			}
		}
	}
	return 0;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int N;
	while (true) {
		cout << "Введіть розмір масиву: ";
		cin >> N;
		if (N > 1) {
			break;
		}
		else {
			cout << "Спробуйте ще раз" << endl;
		}
	}
	int* mass = new int[N];
	ArrR(mass, N);

	cout << "Невідсортований масив:" << endl;
	for (int i = 0; i < N; i++) {
		cout << mass[i] << setw(4);
	}
	cout << endl;
	shellSort(mass,N);
	
	cout << "Відсортований масив:"<<endl;
	for (int i = 0; i < N; i++) {
		cout << mass[i] << setw(4);
	}
	delete[] mass;
}