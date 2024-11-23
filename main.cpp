#include <iostream>
using namespace std;

int main() {
	const int SIZE = 6;
	int income[SIZE];
	int result = 0;
	for (int i = 0; i <= SIZE-1; i++) {
		cout << "Enter income for month " << i + 1 << ": ";
		cin >> income[i];
		result += income[i];
	}
	cout << "Total income for the half of year is: " << result << endl;
	return 0;
}