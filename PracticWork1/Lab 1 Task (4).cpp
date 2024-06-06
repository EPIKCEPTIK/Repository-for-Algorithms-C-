#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int N = 2 + rand() % 100;
	int divider = 2;
	while (N % divider != 0) {
		divider++;
	}
	cout << "Number: " << N << endl;
	cout << "Divider: " << divider << endl;
}