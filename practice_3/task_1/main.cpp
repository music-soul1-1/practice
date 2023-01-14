#include <iostream>
#include <iomanip>
#include <ctime>

// Варіант 16. У двовимірному масиві B (n, n), що складається з дійсних чисел обчислити:
// -- знайти номер мінімального елемента масиву;
// -- обчислити суму елементів масиву, розташованих до другого додатного елемента;
// --заповнити одиницями заштриховану частину квадратної матриці;

int main() {
    using namespace std;
    
    const int SIZE_ROW = 7, SIZE_COL = 7;
    // variables
    int array[SIZE_ROW][SIZE_COL] = {},
        minElement,
        indexOfMinValueInRow = 0, indexOfMinValueInCol = 0,
        sumOfElements = 0,
        countPositive = 0;

    srand(time(NULL));
    
    for (int i = 0; i < SIZE_ROW; i++) {
        for(int j = 0; j < SIZE_COL; j++) {
            array[i][j] = -10 + rand()%21;
            cout << setw(3) << array[i][j];
        }
        cout << "\n";
    }

    // searching for minimum
    minElement = array[0][0];
    for (int i = 0; i < SIZE_ROW; i++){
        for(int j = 0; j < SIZE_COL; j++){
            if(array[i][j] < minElement){
                minElement = array[i][j];
                indexOfMinValueInRow = i;
                indexOfMinValueInCol = j;

            }
        }
    }
    cout << "\n1) Index of min value is "
         << "[" << indexOfMinValueInRow << "]"
         << "[" << indexOfMinValueInCol << "]"
         << "\n" << "The value is "
         << minElement << "\n";

    // 2) обчислити суму елементів масиву, розташованих до другого додатного елемента
    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            if (array[i][j] > 0) {
                countPositive ++;
            }
            if (countPositive >= 2) {
                break;
            }
            sumOfElements += array[i][j];
        }
    }
    cout << "2) Sum of elements before second positive: " << sumOfElements;

    // 3) заповнити одиницями заштриховану частину квадратної матриці
    cout << "\n";
    for (int i = 0; i < SIZE_ROW; i ++) {
        for (int j = 0; j < SIZE_COL; j ++) {
            if ( (i < j && (i + j + 1 > SIZE_ROW)) || (i > j && i + j + 1 < SIZE_ROW) ) {
                array[i][j] = 1;
            }
        }
    }
    // new array output
    cout << "New array:\n";
    for (int i = 0; i < SIZE_ROW; i++) {
        for(int j = 0; j < SIZE_COL; j++) {
            cout << setw(3) << array[i][j];
        }
        cout << "\n";
    }

    return 0;
}
