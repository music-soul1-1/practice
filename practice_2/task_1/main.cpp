#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    using namespace std;

    // constants
    const int SIZE = 20;
    // variables
    int array[SIZE] = {},
        i = 0,
        countNegativeElements = 0,
        countPairs = 0,
        minAbsoluteValue = array[0], indexOfMinAbsoluteValue,
        sumOfAbsoluteValues = 0;

    srand(time(NULL));

    // filling the array
    for (i = 0; i < SIZE; i ++) {
        array[i]= -30 + rand()%(61);
    }
    // array output
    for (i = 0; i < SIZE; i ++) {
        cout << setw(5) << array[i];
        // counting negative elements
        if (array[i] < 0) {
            countNegativeElements++;
        }
    }
    cout << "\n";

    // finding min and max values
    i = 0;
    while (i < SIZE) {
        if (abs(array[i + 1]) < abs(minAbsoluteValue)) {
            minAbsoluteValue = abs(array[i + 1]);
            indexOfMinAbsoluteValue = i + 1;
        }
        i ++;
    }
    // calculating sum of absolute values
    for (i = indexOfMinAbsoluteValue + 1; i < SIZE; i ++) {
        sumOfAbsoluteValues += abs(array[i]);
    }
    for (i = 0; i < SIZE-1; i ++) {
        if ((array[i] > 0 && array[i + 1] < 0) || (array[i] < 0 && array[i + 1] > 0)) {
            countPairs ++;
            cout << "#" << countPairs << " pair of " << array[i] << " and " << array[i+1] << "\n";
        }
    }
    cout << "\n";
    cout << "1) There are " << countNegativeElements << " negative elements;\n"
         << "2) The min absolute value is " << minAbsoluteValue
         << " with index of " << indexOfMinAbsoluteValue << ";\n"
         << "Sum of absolute values = " << sumOfAbsoluteValues << ";\n"
         << "3) Number of pairs is " << countPairs << ";\n";

    return 0;
}
