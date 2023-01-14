#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    using namespace std;
    // variables
    int size = 0,
        range = 32727,
        k = 0, j = 0;

    unsigned long t, t1;

    cout << "Counting sort\n"
         << "Enter array size: ";
    cin >> size;
    // виділення динамічної пам'яті під масив
    int * array = new int [size] {};

    srand(time(NULL));
    // заповнення масиву(початкового)
    for (int i = 0; i < size; i ++) {
        array[i] = rand()%range;
    }
    cout << "\n";

    // COUNTING SORT
    t = clock();    // початок відрахунку часу

    int * count = new int [range] {};

    for (int i = 0; i < size; i ++) {
        //cout << " " << count[array[i]];
        //cout << " " << array[i];
        count[array[i]] ++;
    }

    while (j < range) {
        while(count[j] > 0) {
            array[k] = j;
            k++;
            count[j] --;
        }
        j ++;
    }

    //вівід відсортованого масиву
//    for (int i = 0; i < size; i ++) {
//        cout << " " << array[i];
//    }

    // підрахунок часу сортування
    t1 = clock() - t;
    cout << fixed << "Sorting time: " << ((double)t1) / CLOCKS_PER_SEC << " seconds" << "\n"
         << "log( Time(n) ) = " << log((((double)t1) / CLOCKS_PER_SEC) ) << "\n";

    // звільнення пам'яті
    delete [] array;
    return 0;
}

//cout << "Sorted array:\n";
//for (int i = 0; i < size; i++) {
//cout << array[i] << " ";
//}