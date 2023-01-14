#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    // Варіант 1. Підрахувати кількість ділянок, які утворюють безперервні послідовності чисел зі значеннями, що не зменшуються. Вивести всі ділянки.

    using namespace std;

    const int SIZE = 20;
    int arr_1[SIZE] = {};
    int minVal, maxVal, key,
            i = 0, j = 0,
            countElement = 1,
            indexFirst = 0;
    bool startUp = false;

    srand(time(NULL));
    minVal = maxVal = arr_1[0];

    // заповнення масиву
    for (int i = 0; i < SIZE; i ++) {
        arr_1[i] = -1 + rand()%21;
    }
    for (int i = 0; i < SIZE; i ++) {
        cout << setw(5) << arr_1[i];
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i ++) {
        if (arr_1[i] < arr_1[i + 1]) {
            if (arr_1[i] < arr_1[i + 1]) {
                if (startUp == false) {
                    startUp = true;
                }
                countElement + 1;
            }
            else if (countElement > 1) {
                for (j = indexFirst; j < indexFirst + countElement; j++) {
                    cout << setw(5) << arr_1[j];
                }
            }
            cout << "\n";
            indexFirst = i ++;
            countElement = 1;
        }
    }

    return 0;
}
