#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int randomN = 0 + rand() % 20;
	int userN;
	int times = 0;
	cout << "Enter a number from 0 to 20" << endl;
	while (true) {
		cin >> userN;
		if (userN <= 20 && userN >= 0) {
			times++;
			if (userN > randomN) {
				cout << "The proposed number is more than intended" << endl;
			}
			else if (userN < randomN) {
				cout << "The proposed number is less than intended" << endl;
			}
			else {
				cout << "You guessed the number with " << times << " time" << endl;
				return 0;
			}
		}

		else {
			cout << "Invalid value, try again" << endl;
		}
	}
}