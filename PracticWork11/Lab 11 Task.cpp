#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int N;
    int M;
    while (true) {
        cout << "Введіть кількість рядків: ";
        cin >> N;
        cout << "Введіть кількість стопців: ";
        cin >> M;

        if (N > 0) {
            break;
        }
    }
    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[M];
    }

    int buff = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 29;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arr[j][0] < arr[j + 1][0]) {
                for (int k = 0; k < M; k++) {
                    int temp = arr[j][k];
                    arr[j][k] = arr[j + 1][k];
                    arr[j + 1][k] = temp;
                }
            }
        }
    }
    cout << endl;

    cout << "Відсортований масив за першим стопвчиком" << endl;
    for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << arr[i][j] << '\t';
            }
            cout << endl;
        }
    cout << endl;


    int i, j;

    for (int k = 0; k < N; k++) {
        for (i = 2; i < M; i++) {
            buff = arr[k][i];
            for (j = i - 1; j > 0 && arr[k][j] > buff; j--)
                arr[k][j + 1] = arr[k][j];

            arr[k][j + 1] = buff;
        }
    }
    cout << "Відсортований масив" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }


    for (int i = 0; i < N; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}
