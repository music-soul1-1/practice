#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

int main() {
    using namespace std;

    const int SIZE = 5;
    int queue[SIZE] = {};
    int menuCursor = 1,
            element,
            end = 0, start = 0,
            elementPosition = 0;

    while (menuCursor != 0) {


        cout << "Select task \n";
        cout << "1 - add element \n";
        cout << "2 - delete element \n";
        cout << "3 - output queue \n";
        cout << "4 - count elements in queue \n";
        cout << "5 - erase elements \n";
        cout << "\n0 - exit \n";
        cin >> menuCursor;

        switch (menuCursor) {
            case 1: {
                if (end == SIZE) {
                    cout << "queue if full" << "\n";
                }
                else {
                    if (end == -1) {
                        cout << "you can only insert element in first pos \n";
                        start = 0;
                        cout << "iput element: ";
                        cin >> element;
                        queue[++end] = element;
                    }
                    else {
                        do{
                            cout << "Enter element position from 1 to " << end - start + 1 << "\n";
                            cin >> elementPosition;
                        } while (elementPosition < 1 || elementPosition > end-start+1);
                        cin >> element;
                        end ++;
                        for (int i = start + elementPosition - 1; i <= end; i ++) {
                            swap(queue[i], element);
                        }

                    }


                    //cout << "start is " << start << "\nend is " << end;
                }
                break;
            }
            case 2: {
                if (end == -1) {
                    cout << "stack is empty";
                }
                else {
                    cout << "element removed" << queue[start ++] << "\n";
                    if (start > end) {
                        start = end = -1;
                    }

                }
                break;
            }
            case 3: {
                if (end == -1) {
                    cout << "queue is empty\n";
                }
                else {
                    for (int i = start; i <= end; i ++) {
                        cout << setw(5) << queue[i];
                    }
                }
                cout << "\n";

                break;
            }
            case 4: {
                cout << "Size of queue is" << end - start << "\n";
                break;
            }
            case 5: {
                end = 0;
                cout << "queue has been erased\n";

                break;
            }
            case 0: {
                return 0;
            }
        }
        system("pause");
        system("cls");
    }

    return 0;
}