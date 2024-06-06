#include <iostream>
using namespace std;
int main() {
	const int N = 10;
	int bank[N] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, };
	int bill[N];

	int userSum;
	cout << "Enter the required amount of money: ";
	cin >> userSum;
	for (int i = 0; i < N; i++) {
		int bills = 0;
		if (userSum >= bank[i]) {
			while (true) {

				userSum -= bank[i];
				bills++;

				if (userSum < bank[i]) {
					break;
				}
			}
		}
		else if (userSum <= 0) {
			cout << "Incorrect value, please, try again";
			return 0;
		}
		bill[i] = bills;

	}
	cout << "Number of bills issued: " << endl;
	for (int i = 0; i < N; i++) {
		if (bill[i] > 0) {
			cout << bill[i] << " " << bank[i] << endl;
		}
	}
}