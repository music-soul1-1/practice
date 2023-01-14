#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    using namespace std;
    const int SIZE_ROW = 4,
            SIZE_COL = 3;
    int array[SIZE_ROW][SIZE_COL] = {},
        vector[SIZE_ROW] = {},
        vectorSumCol[SIZE_COL] = {},
            maxElement;
    srand(time(NULL));

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            array[i][j] = rand()%21;
        }
    }

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            cout << setw(5) << array[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < SIZE_ROW; i ++) {
        maxElement = array[i][0];
        vector[i] = 0;
        for (int j = 0; j < SIZE_COL; j ++) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                vector[i] = j;
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < SIZE_ROW; i ++) {
        cout << setw(5) << vector[i];
    }

    for (int j = 0; j < SIZE_COL; j ++) {
        vectorSumCol[j] = 0;
        for (int i = 0; i < SIZE_ROW; i ++) {
            vectorSumCol[j] += array[i][j];
        }
    }
    cout << "\nVector sum col " << "\n";

    for (int i = 0; i < SIZE_COL; i ++) {
        cout << setw(5) << vectorSumCol[i];
    }
    return 0;
}
