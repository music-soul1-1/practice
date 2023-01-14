#include <iostream>
#include <iomanip>
#include <ctime>

// Варіант 16. Дан масив цілих чисел A (K, К).
// Сформувати вектор D (К), в який записати значення елементів головної діагоналі масиву.

int main() {
    using namespace std;

    const int SIZE_ROW = 8, SIZE_COL = 8;
    // variables
    int array[SIZE_ROW][SIZE_COL] = {},
        vector[] = {},
        n = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE_ROW; i++) {
        for(int j = 0; j < SIZE_COL; j++) {
            array[i][j] = -10 + rand()%21;
            cout << setw(3) << array[i][j];
        }
        cout << "\n";
    }

    // Сформувати вектор D (К), в який записати значення елементів головної діагоналі масиву.
    for (int i = 0; i < SIZE_ROW; i ++) {
        vector[n] = array[i][i];
        n++;
    }
    cout << "\nvector\n";

    for (int i = 0; i < n; i++) {
        cout << setw(5) << vector[i];
    }

    return 0;
}
