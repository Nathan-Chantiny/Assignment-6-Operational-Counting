#include <iostream>
#include <cmath>

using namespace std;

int summationA(int number) { // for loop
	int n = 0;

	for (int i = 1; i <= number; i++) {
		n += i; // n = n + (i + 1)
	}

	return n;
}

int summationB(double number) { // formula
	int n = (pow(number, 2.0) + number) / 2;

	return n;
}

int main() {
	cout << "Pick a number: ";
	int x;
	cin >> x;
	cout << "\n";

	cout << "number of operations using for loop: " << x - 1 << endl;
	cout << "sum using a for loop: " << summationA(x) << "\n\n";
	
	cout << "number of operations using formula: 3" << endl;
	cout << "sum using formula: " << summationB(x) << "\n\n";
}