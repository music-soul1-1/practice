#include <iostream>
#include <iomanip>
// example 0
int main() {
    using namespace std;
    const int SIZE = 20;
    double sum = 0;
    int arr_1[SIZE] = {1, 2, 4 ,5, 6, 3, 6 ,7, 82, 93, 12};
    int minVal, maxVal,
        i = 0,
        countNeg = 0, sumNeg = 0, maxNegativeValue = 0;
    bool isNegative = false;
    minVal = maxVal = arr_1[0];

    for (int i = 0; i < SIZE; i ++) {
        arr_1[i] = -10 + rand()%21;
    }
    for (int i = 0; i < SIZE; i ++) {
        cout << setw(5) << arr_1[i];
    }
    cout << "\n";
    // min max
    while (i < SIZE) {
        if (arr_1[i] < minVal) {
            minVal = arr_1[i];
        }
        else if (arr_1[i] > maxVal) {
            maxVal = arr_1[i];
        }
        sum += arr_1[i];
        if (arr_1[i] < 0) {
            countNeg ++;
            sumNeg += arr_1[i];
        }

        i ++;
    }
    for (int i = 0; i < SIZE; i ++) {
        if (arr_1[i] >= 0) {
            continue;
        }
        if (isNegative == false) {
            maxNegativeValue = arr_1[i]; // знайшли перший негативний елемент
            isNegative = true;
            continue;
        }
        if (maxNegativeValue < arr_1[i]) { // якщо знайшли наступний негативний елемент
            maxNegativeValue = arr_1[i];
        }
    }
    if (isNegative) {
        cout << "Max negative value" << maxNegativeValue << "\n";
    }
    else {
        cout << "arr_1 has no negative values" << "\n";
    }

    cout << "Min value is: " << minVal << "\t" << "Max value is: " << maxVal << "\t" << "Avr is: " << sum/SIZE << "\n";

    if (countNeg != 0) {
        cout << "Average neg: " << setprecision(2) << sumNeg/countNeg << "\n";
    }
    else {
        cout << "arr_1 has no neg elements";
    }

    return 0;
}
