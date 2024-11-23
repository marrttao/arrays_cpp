#include <iostream>
using namespace std;

int array_max(int array[], int size, int& Max_Month) {
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

int array_min(int array[], int size, int& Min_Month) {
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
    int range_start, range_end;
    cout << endl << "Enter range start (0-11): ";
    cin >> range_start;
    cout << "Enter range end (1-12): ";
    cin >> range_end;

    if (range_start < 0 || range_end > SIZE || range_start >= range_end) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    int subarray_size = range_end - range_start;
    int Max_Income = array_max(&income[range_start], subarray_size, Max_Month);
    cout << "Max income is " << Max_Income << " in month " << (Max_Month + range_start + 1) << "." << endl;
    int Min_Income = array_min(&income[range_start], subarray_size, Min_Month);
    cout << "Min income is " << Min_Income << " in month " << (Min_Month + range_start + 1) << "." << endl;

    return 0;
}
