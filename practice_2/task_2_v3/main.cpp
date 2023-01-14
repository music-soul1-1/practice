#include <iostream>
#include <iomanip>
#include <ctime>

// Варіант 16. У всіх послідовностях негативних чисел поміняти місцями елементи з максимальним і мінімальним значеннями.

int main() {
    using namespace std;

    const int SIZE = 15;
    // variables
    int array[SIZE]{},
        maxValueInSequence = array[0], minValueInSequence = array[0],
        indexOfMinValue = 0, indexOfMaxValue = 0, countNegative = 0;
    bool isNegativeFound = false;

    srand(time(NULL));
    // array output
    for (int i = 0; i < SIZE; i ++) {
        cout << "-----" << "+";
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        array[i]= -10 + rand()%(21);
        cout << setw(3) << array[i] << setw(3) << "|";
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i ++) {
        cout << "-----" << "+";
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        if (array[i] < 0) {
            if (countNegative == 0) {
                maxValueInSequence = minValueInSequence = array[i];
                indexOfMaxValue = indexOfMinValue = i;
            }
            else {
                if (maxValueInSequence < array[i]) {
                    maxValueInSequence=array[i];
                    indexOfMaxValue=i;
                }
                else if (minValueInSequence > array[i]) {
                    minValueInSequence=array[i];
                    indexOfMinValue=i;
                }
            }
            countNegative ++;
            isNegativeFound = true;
        }
        if (((array[i] >= 0) || (i == SIZE-1)) && isNegativeFound) {
            swap(minValueInSequence, maxValueInSequence);
            array[indexOfMinValue] = minValueInSequence;
            array[indexOfMaxValue] = maxValueInSequence;

            countNegative=0;
            isNegativeFound = false;
        }
    }
    cout<<"new array:"<< "\n";
    // new array output
    for (int i = 0; i < SIZE; i ++) {
        cout << "-----" << "+";
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        cout << setw(3) << array[i] << setw(3) << "|";
    }
    cout << "\n";

    for (int i = 0; i < SIZE; i ++) {
        cout << "-----" << "+";
    }

    return 0;
}
