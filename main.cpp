#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int array[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = SIZE -1; i >= 0; i--) {
		cout << array[i] << endl;
	}
	return 0;
}