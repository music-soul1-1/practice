#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
    using namespace std;
    // variables
    int size = 0,
        range = 32727;

    unsigned long t, t1;

    cout << "Enter array size: ";
    cin >> size;
    // виділення динамічної пам'яті під масив
    int * array = new int [size] {};

    srand(time(NULL));
    // заповнення та виведення масиву(початкового)
    for (int i = 0; i < size; i ++) {
        array[i] = rand()%range;
        //cout << setw(7) << array[i];
    }

    //t = clock(); //число тактів процесора з початку програми

//    // сортування методом бульбашки
//    for (int i = 0; i < size; i++) {
//        // визначає чи було виконано перестановку елементів
//        bool isChanged = false;
//        // внутрішній цикл залежить від зовнішнього
//        // це дозволяє на кожному кроці зменшуавти проход масиву на 1 елемент
//        for (int j = 0; j < size - i - 1; j ++) {
//            if (array[j] > array[j+1]) {
//                swap(array[j], array[j+1]);
//                isChanged = true;
//            }
//        }
//        // якщо обміну не відбувалось, завершуємо сортування
//        if (!isChanged) {
//            break;
//        }
//    }
    cout << "\n";

    // COUNTING SORT
    t = clock();    // початок відрахунку часу

    int * count = new int [range] {};

    for (int i = 0; i < size; i ++) {
        count[array[i]] ++;
    }
    int k = 0, j = 0;

    cout << endl;
    while (j < range) {
        while(count[j] != 0) {
            array[k] = j;
            k++;
            count[j] --;
        }
        j ++;
    }
    // підрахунок часу сортування
    t1 = clock() - t;
    cout << fixed << "Sorting time: " << ((double)t1) / CLOCKS_PER_SEC << " seconds" << endl;

    //вівід відсортованого масиву
//    for (int i = 0; i < size; i ++) {
//        cout << setw(7) << array[i];
//    }




    // звільнення пам'яті
    delete [] array;
    return 0;
}
