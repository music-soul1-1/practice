#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    using namespace std;

    const int SIZE = 20;
    int arr_1[SIZE] = {};
    int minVal, maxVal, key,
            i = 0,
            indexMaxVal, indexMinVal,
            sumPaired = 0,
            countPositive = 0;
    bool isFirstNegative = false, isSecondNegative = false;

    srand(time(NULL));
    minVal = maxVal = arr_1[0];

    // заповнення масиву
    for (i = 0; i < SIZE; i ++) {
        arr_1[i] = -1 + rand()%21;
    }
    for (i = 0; i < SIZE; i ++) {
        cout << setw(5) << arr_1[i];
    }
    cout << "\n";
    cout << "Enter key: ";
    cin >> key;

    // виведення масиву
    for (i = 0; i < SIZE; i ++) {
        if (arr_1[i] == key ) {
            for (int j = 0; j < i; j++) {
                swap(arr_1[j], arr_1[i]);
            }
            break;
        }
    }
    if (i == SIZE) {
        cout << "No element " << key << "\n";
    }
    else {
        cout << "Element " << key << " with index " << i << "\n";
    }

    return 0;
}
