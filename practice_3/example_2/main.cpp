#include <iostream>
#include <iomanip>

int main() {
    using namespace std;
    const int SIZE_ROW = 3,
            SIZE_COL = 3;
    int array[SIZE_ROW][SIZE_COL] = {1, 2, 5,3 ,4 ,7 ,74},
            minElement,
            countDiagonalElements = 0;
    srand(time(NULL));

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            array[i][j] = rand()%21;
        }
    }
    minElement = array[0][0];

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            cout << setw(5) << array[i][j];
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) { // i + j + 1 !!!
            if (i == j || i + j + 1 == SIZE_ROW) {
                if (array[i][j] < 10 && array[i][j] >= 5) {
                    countDiagonalElements ++;
                }
            }
        }
    }
    cout << "Count diagonal elem " << countDiagonalElements;

    return 0;
}
