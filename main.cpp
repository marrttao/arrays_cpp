#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int pentagon[SIZE];
	int result = 0;
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter a size: ";
		cin >> pentagon[i];
		result += pentagon[i];
	}
	cout << "The perimeter of the pentagon is: " << result << endl;
	return 0;
}