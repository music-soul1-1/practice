#include <iostream>
#include <iomanip>
#include <bits.h>

int main() {
    using namespace std;

    const int SIZE = 2;
    int stack[SIZE] = {};
    int top = 0, menuCursor = 1,
        element;

    while (menuCursor != 0) {


        cout << "Select task \n";
        cout << "1 - add element \n";
        cout << "2 - delete element \n";
        cout << "3 - output stack \n";
        cout << "4 - count elements in stack \n";
        cout << "5 - erase elements \n";
        cout << "\n0 - exit \n";
        cin >> menuCursor;

        switch (menuCursor) {
            case 1: {
                if (top == SIZE) {
                    cout << "Stack if full" << "\n";
                }
                else {
                    cout << "Enter element: ";
                    cin >> element;
                    stack[top++] = element;
                }
                break;
            }
            case 2: {
                if (top == 0) {
                    cout << "Stack is empty\n";
                }
                else {
                    cout << "element removed" << stack[top--] << "\n";
                }
                break;
            }
            case 3: {
                if (top == 0) {
                    cout << "Stack is empty\n";
                }
                else {
                    for (int i = top - 1; i >= 0; i --) {
                        cout << setw(5) << stack[i];
                    }
                }
                cout << "\n";

                break;
            }
            case 4: {
                cout << "Size of stack is" << top << "\n";
                break;
            }
            case 5: {
                top = 0;
                cout << "Stack has been erased\n";

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
