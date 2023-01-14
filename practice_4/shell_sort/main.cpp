// Shell Sort
#include <iostream>
#include <cmath>
#include <ctime>

int main() {
    using namespace std;
    // variables
    int size = 0,
        range = 32727;

    unsigned long t, t1;

    cout << "Shell sort\n"
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

    // Переставлення елементів на кожних n/2, n/4, n/8, ... інтервалах
    for (int interval = size / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < size; i++) {
            int temp = array[i];
            int j;
            for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
                array[j] = array[j - interval];
            }
            array[j] = temp;
        }
    }
    // підрахунок часу сортування
    t1 = clock() - t;
    cout << fixed << "Sorting time: " << ((double)t1) / CLOCKS_PER_SEC << " seconds\n"
         << "log( Time(n) ) = " << log((((double)t1) / CLOCKS_PER_SEC) ) << "\n";

    // звільнення пам'яті
    delete [] array;
    return 0;
}

//cout << "Sorted array:\n";
//for (int i = 0; i < size; i++) {
//cout << array[i] << " ";
//}