#include <iostream>
#include <iomanip>
#include <ctime>

// Варіант 5. У всіх послідовностях позитивних чисел замінити значення елементів з максимальним і
// мінімальним значенням на середнє для цієї послідовності.

// моє завдання:
// Варіант 16. У всіх послідовностях негативних чисел поміняти місцями елементи з максимальним і мінімальним значеннями.

int main() {
    using namespace std;

    const int SIZE = 15;
    // variables
    int array[SIZE]{},
            maxValueInSequence = array[0], minValueInSequence = array[0],
            indexOfMinValue = 0, indexOfMaxValue = 0, count = 0;
    bool isPositiveFound = false;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i ++) {
        array[i]= -10 + rand()%(21);
    }
    // array output
    for (int i = 0; i < SIZE; i++){
        cout<<setw(5)<< array[i];
    }
    cout << endl;

    for (int i=0; i<SIZE; i++) {
        if (array[i] > 0) {
            if (maxValueInSequence<array[i]) {
                maxValueInSequence=array[i];
                indexOfMaxValue=i;
            }
            if (minValueInSequence>array[i]) {
                minValueInSequence=array[i];
                indexOfMinValue=i;
            }
            count++;
        }
        if (array[i] < 0 && count == 0){
            isPositiveFound=false;
        }
        if ((array[i] <= 0 || i == SIZE - 1) && isPositiveFound) {
            //averageValue = suma/count;
            swap(minValueInSequence, maxValueInSequence);
            array[indexOfMinValue] = minValueInSequence;
            array[indexOfMaxValue] = maxValueInSequence;
            count=0;
        }
        isPositiveFound = true;
    }
    cout<<"zminenyi arrayyv:"<< endl;
    for (int i = 0;i < SIZE;i++) {
        cout<<setw(5)<< array[i];
    }
    cout << endl;

    return 0;
}
