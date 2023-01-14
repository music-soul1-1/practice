#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE=20;
    int index_1=0, count_element=1;
    int arr[SIZE]{};
    for (int i=0; i<SIZE; i++){
        arr[i]=-5+rand()%21;
    }
    for (int i=0; i<SIZE; i++){
        cout<<setw(5)<< arr[i];
    }
    cout<<endl;
    for (int i=0; i<SIZE-1; i++){
        if(arr[i]<arr[i+1]){
            count_element++;
        }
        else
        if(count_element>1){
            for(int j=index_1;j<index_1+count_element;j++){
                cout<<setw(5)<< arr[j];
            }
            cout<<endl;
            count_element=1;
            index_1=i+1;
        }
        else{
            index_1=i+1;
        }
    }
    // this was already written (l 24):
    if(count_element>1){
        for(int j=index_1;j<index_1+count_element;j++){
            cout<<setw(5)<< arr[j];
        }
        cout<<endl;
    }
    return 0;
}
