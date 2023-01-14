#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

int main() {
    using namespace std;

    const int SIZE = 2;
    int queue[SIZE] = {};
    int menuCursor = 1,
        element,
        end = 0;

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
                    cout << "Enter element: ";
                    cin >> element;
                    queue[end++] = element;
                }
                break;
            }
            case 2: {
                if (end == 0) {
                    cout << "queue is empty\n";
                }
                else {
                    cout << "element removed" << queue[0] << "\n";
                    end --;
                    for (int i = 0; i < end; i ++) {
                        queue[i] = queue[i+1];
                    }
                }
                break;
            }
            case 3: {
                if (end == 0) {
                    cout << "queue is empty\n";
                }
                else {
                    for (int i = end - 1; i >= 0; i --) {
                        cout << setw(5) << queue[i];
                    }
                }
                cout << "\n";

                break;
            }
            case 4: {
                cout << "Size of queue is" << end << "\n";
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
