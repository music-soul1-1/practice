#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    using namespace std;

    const int SIZE = 20;
    double sum = 0;
    int arr_1[SIZE] = {};
    int minVal, maxVal,
            i = 0,
            indexMaxVal, indexMinVal,
            sumPaired = 0;
    bool isNegative = false, isPaired = false;

    srand(time(NULL));
    minVal = maxVal = arr_1[0];

    // заповнення масиву
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
            indexMinVal = i;
        }
        else if (arr_1[i] > maxVal) {
            maxVal = arr_1[i];
            indexMaxVal = i;
        }

        i ++;
    }
    if (indexMaxVal < indexMinVal) {
        swap(indexMaxVal, indexMinVal);
    }
    for (int i = indexMinVal + 1;i < indexMaxVal; i ++ ) {
        if (arr_1[i]%2 == 0) {
            sumPaired += arr_1[i];
            isPaired = true;
        }
    }
    if (isPaired) {
        cout << "Sum paired: " << sumPaired;
    }
    else {
        cout << "no paired elements";
    }

    cout << "Min val: " << minVal << "\tMin value index " << indexMinVal << "\n";
    cout << "Max val: " << maxVal << "\tMax value index " << indexMaxVal << "\n";

    return 0;
}
