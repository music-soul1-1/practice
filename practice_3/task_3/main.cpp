#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    using namespace std;
    const int SIZE_ROW = 7,
              SIZE_COL = 5;
    int array[SIZE_ROW][SIZE_COL] = {},
        indexOfMaxInRow = 0, indexOfMaxInCol = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            array[i][j] = -10 + rand()%21;
            cout << setw(5) << array[i][j];
        }
        cout << "\n";
    }
    cout << "\n";

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            if (array[i][j]  > array[indexOfMaxInRow][indexOfMaxInCol]) {
                indexOfMaxInRow = i;
                indexOfMaxInCol = j;
            }
        }
    }
    cout << "Max element " << array[indexOfMaxInRow][indexOfMaxInCol] << "\n";

    for (int i = SIZE_ROW-1; i >= indexOfMaxInRow; i --) {
        for (int j = SIZE_COL-1; j >= 0; j --) {
            if (i == indexOfMaxInRow && j == indexOfMaxInCol) {
                break;
            }
            swap(array[i][j], array[indexOfMaxInRow][indexOfMaxInCol]);
        }
    }
    cout << "\nNew array\n";
    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            cout << setw(5) << array[i][j];
        }
        cout << "\n";
    }

    return 0;
}
