#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    using namespace std;
    const int SIZE_ROW = 3,
              SIZE_COL = 3;
    int array[SIZE_ROW][SIZE_COL] = {1, 2, 5,3 ,4 ,7 ,74},
        minElement, rowMin = 0, colMin = 0,
        sumOfElements = 0, sumOfElementsBeforeNeg = 0;
    bool isLastNegative = false;
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

    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                rowMin = i;
                colMin = j;
            }
        }
    }
    cout << "\n";

    for (int i = 0; i <= rowMin; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            if (i == rowMin && j == colMin) {
                break;
            }
            sumOfElements += array[i][j];
        }
    }
    cout << "1) Min element " << minElement
         << "2) Sum of elements before min " << sumOfElements;
    // знайти суму елементів до отсаннього від'ємного

    for (int i = SIZE_ROW - 1; i >= 0 ; i --) {
        for (int j = SIZE_COL - 1; j >= 0; j ++) {
            if (array[i][j] >= 0 && !isLastNegative) {
                continue;
            }
            else if (!isLastNegative) {
                isLastNegative = true;
                continue;
            }
            else {
                sumOfElementsBeforeNeg += array[i][j];
            }
        }
    }
    cout << "Sum of elements before last negative ";

    return 0;
}
