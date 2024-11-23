#include <iostream>
using namespace std;

int main() {
	int income[6] {};
	int result = 0;
	for (int i = 0; i <= 5; i++) {
		cout << "Enter income for month " << i + 1 << ": ";
		cin >> income[i];
		result += income[i];
	}
	cout << "Total income for the half of year is: " << result << endl;
	return 0;
}