// Selection sort

#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    using namespace std;

    // variables
    int size = 0,
        range = 32727;

    unsigned long t, t1;

    cout << "Selection sort\n"
         << "Enter array size: ";
    cin >> size;
    // виділення динамічної пам'яті під масив
    int * array = new int [size] {};

    srand(time(NULL));
    // заповнення масиву(початкового)
    for (int i = 0; i < size; i ++) {
        array[i] = rand()%range;
    }
    // сортування:
    t = clock();    // початок відрахунку часу

    for (int i = 0; i < size - 1; i++) {
        int indexOfMin = i;
        for (int j = i + 1; j < size; j++) {
            // Select the minimum element in each loop.
            if (array[j] < array[indexOfMin])
                indexOfMin = j;
        }
        // put min at the correct position
        swap(array[indexOfMin], array[i]);
    }
    // підрахунок часу сортування
    t1 = clock() - t;
    cout << fixed << "Sorting time: " << ((double)t1) / CLOCKS_PER_SEC << " seconds\n"
         << "log(n) = " << log(size) << "\n"
         << "log( Time(n) ) = " << log((((double)t1) / CLOCKS_PER_SEC) ) << "\n";

    // звільнення пам'яті
    delete [] array;
    return 0;
}

//cout << "Sorted array:\n";
//for (int i = 0; i < size; i++) {
//cout << array[i] << " ";
//}
