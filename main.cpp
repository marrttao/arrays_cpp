#include <algorithm>
#include <iostream>
#include <random>
using namespace std;

int array_max(int array[], int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
int array_min(int array[], int size) {
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    const int size = 10;
    int arr[size];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        arr[i] = dist(gen);
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Minimum element: " << array_min(arr, size) << endl;
    cout << "Maximum element: " << array_max(arr, size) << endl;

    return 0;
}
