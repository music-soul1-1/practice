#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

int main()
{
    using namespace std;

    const int SIZE = 5;
    int queue [SIZE] {};
    int end = 0, menuCursor = 1, element;
    bool isUnique;

    while (menuCursor != 0) {
        cout << "Choose an action: \n\n";
        cout << "1) Add element \n";
        cout << "2) Delete element \n";
        cout << "3) Content queue \n";
        cout << "4) Count elements in queue \n";
        cout << "5) Clean queue \n\n";
        cout << "0) Exit \n";
        cin >> menuCursor;

        switch (menuCursor) {
            default: {
                cout << "Error\n";
                cout << "What to do? Enter 1 to continue, 0 to exit\n";
                cin >> element;

                if (element == 1) {
                    continue;
                }
                else {
                    return 0;
                }
            }
            case 1: {
                if (end == SIZE) {
                    cout << "Queue is full. Please remove an element\n";
                    break;
                }
                else {
                    isUnique = true;

                    cout << "Enter element: \n";
                    cin >> element;
                    for (int i = 0; i < SIZE; i ++) {
                        if (element == queue[i]) {
                            cout << "Array must only contain unique elements.\n";
                            isUnique = false;
                            break;
                        }
                    }
                    if (isUnique) {
                        queue[end++] = element;
                    }

                    break;
                }
            }
            case 2: {
                if (end == 0) {
                    cout << "Queue is empty\n";
                }
                else {
                    cout << "Element " << queue[--end] << " removed.\n";
                }

                break;
            }
            case 3: {
                if (end == 0) {
                    cout << "Queue is empty\n";
                }
                else {
                    for (int i = 0; i < end; i++) {
                        cout << setw(5) << queue[i] << setw(5) << "| ";
                    }
                    cout << "\n";
                }

                break;
            }
            case 4: {
                cout << "Size of queue is " << end << "\n";

                break;
            }
            case 5: {
                end = 0;
                cout << "Queue was been cleaned\n";

                break;
            }
            case 0: {
                return 0;
            }
        }
        system("PAUSE");
        system("CLS");
    }

    return 0;
}
