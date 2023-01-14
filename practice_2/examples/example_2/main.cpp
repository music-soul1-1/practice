#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    using namespace std;

    const int SIZE = 20;
    int arr_1[SIZE] = {};
    int minVal, maxVal,
            i = 0,
            indexMaxVal, indexMinVal,
            sumPaired = 0,
            countPositive = 0;
    bool isFirstNegative = false, isSecondNegative = false;

    srand(time(NULL));
    minVal = maxVal = arr_1[0];

    // заповнення масиву
    for (int i = 0; i < SIZE; i ++) {
        arr_1[i] = -5 + rand()%21;
    }
    for (int i = 0; i < SIZE; i ++) {
        cout << setw(5) << arr_1[i];
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        if (arr_1[i] < 0) {
            if (isFirstNegative) {
                isSecondNegative = true;
                break;
            }
            else if (isFirstNegative == false) {
                isFirstNegative = true;
                continue;
            }
        }
        if (arr_1[i] > 0 && isFirstNegative) {
            countPositive ++;
        }
    }
    if (isSecondNegative == false) {
        cout << "There is no second negative element";
    }
    else {
        cout << "Count positive: " << countPositive << "\n";
    }

    return 0;
}
