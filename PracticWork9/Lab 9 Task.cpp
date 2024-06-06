#include <iostream>
#include <Windows.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int M;
	int N;
	while (true) {
		cout << "������ ������� �����: ";
		cin >> N;
		cout << "������ ������� �������: ";
		cin >> M;
		if (N > 0 && M > 0) {
			break;
		}
	}
	int** arr = new int* [N];
	
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 9;
		}
	}
	cout << "��������� �������:" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < M-1; j++) {
				if (arr[k][j] < arr[k][j + 1]) {
					int b = arr[k][j]; 
					arr[k][j] = arr[k][j + 1]; 
					arr[k][j + 1] = b; 
				}
			}
		}
	}

	
	cout << "ʳ����� �������:" << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
