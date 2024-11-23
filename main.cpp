#include <iostream>
using namespace std;

int array_max(int array[], int size, int& Max_Month) { // & Прикольная штука что бы изменять оригинальный обьект
    int max = array[0];
    Max_Month = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
            Max_Month = i;
        }
    }
    return max;
}
int array_min(int array[], int size, int& Min_Month) { // & Прикольная штука что бы изменять оригинальный обьект
	int min = array[0];
	Min_Month = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			Min_Month = i;
		}
	}
	return min;
}

int main() {
    const int SIZE = 12;
    int income[SIZE];
    int Max_Month = 0;
	int Min_Month = 0;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter income for month " << i + 1 << ": ";
        cin >> income[i];
    }
    int Max_Income = array_max(income, SIZE, Max_Month);
    cout << "Max income is " << Max_Income << " in month " << Max_Month + 1 << "." << endl;
	int Min_Income = array_min(income, SIZE, Min_Month);
	cout << "Min income is " << Min_Income << " in month " << Min_Month + 1 << "." << endl;
    return 0;
}
