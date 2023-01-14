#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    using namespace std;
    const int SIZE_ROW = 4,
            SIZE_COL = 3;
    int array[SIZE_ROW][SIZE_COL] = {},
            indexOfMaxInRow = 0, indexOfMaxInCol = 0;
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
    cout << "\n";

    for (int i = SIZE_ROW - 1; i > 0; i --) {
        for (int j = 0; j < SIZE_COL; j ++) {
            swap(array[i][j], array[i - 1][j]);
        }
    }
    cout << "\n";
    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            cout << setw(5) << array[i][j];
        }
        cout << "\n";
    }
    return 0;
}
