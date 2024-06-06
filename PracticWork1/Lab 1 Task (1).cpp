#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int number = 9;
	int firstN = 1 + rand() % 18;
	int secondN = 1 + rand() % 18;
	int thirdN = 1 + rand() % 18;
	if (firstN <= number || secondN <= number || thirdN <= number) {
		if (firstN <= number) {

			cout << "The first number: " << firstN << endl;
		}
		if (secondN <= number) {
			cout << "The second number: " << secondN << endl;
		}
		if (thirdN <= number) {
			cout << "The third number: " << thirdN << endl;
		}
	}
	else {
		cout << "No number belongs to the interval";
	}

}