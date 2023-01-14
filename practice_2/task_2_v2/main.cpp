#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE=20;

    int array[SIZE]{};
    int index_1=0, count_element=1,
        minValueInSequence, maxValueInSequence,
        indexOfMinValue = 0, indexOfMaxValue = 0;
    bool isPositive = false;

    for (int i=0; i<SIZE; i++){
        array[i]=-30+rand()%61;
    }
    for (int i=0; i<SIZE; i++){
        cout<<setw(5)<< array[i];
    }
    cout<<endl;
    minValueInSequence = maxValueInSequence = array[0];
    for (int i=0; i<SIZE-1; i++){
        if (array[i] < 0 && array[i + 1] < 0) {
            count_element ++;
            if (array[i] < array[i + 1]) {
                maxValueInSequence = array[i + 1];
                indexOfMaxValue = i + 1;
            }
            else if (array[i] > array[i + 1]) {
                minValueInSequence = array[i + 1];
                indexOfMinValue = i + 1;
            }
        }
        else if (array[i] < 0 && array[i + 1] >= 0) {
            isPositive = true;
            for (int j = i - count_element; j < i; j ++) {
                cout<<setw(5)<< array[j];
            }
            cout<<endl;
            count_element=1;
            index_1=i+1;
        }
        else{
            index_1=i+1;
        }
    }
    return 0;
}
