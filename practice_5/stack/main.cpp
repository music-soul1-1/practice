#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 5;
    int stack [SIZE] {};
    int top = 0,menu_cursor = 1,element;

    while (menu_cursor != 0){
        cout << "Choose an action: " <<endl<<endl;
        cout << "1) Add element" <<endl;
        cout << "2) Delete element " <<endl;
        cout << "3) Content Stack " <<endl;
        cout << "4) Count elements in stack " <<endl;
        cout << "5) Clean stack" <<endl<<endl;
        cout << "0) Exit " <<endl;
        cin >> menu_cursor;


        switch (menu_cursor){
            case 1: {
                if (top == SIZE){
                    cout<<"Stack is full. Please remove element"<<endl;
                }
                else{
                    cout<<"Enter element: "<<endl;
                    cin >> element;
                    stack[top++] = element;

                }
                break;
            }
            case 2: {
                if (top == 0){
                    cout<<"Stack is empty"<<endl;

                }
                else{
                    cout<<"Element removed. "<<stack[--top]<<endl;
                }

                break;

            }
            case 3: {
                if (top == 0){
                    cout<<"Stack is empty"<<endl;

                }
                else{
                    for (int i = top - 1; i >= 0; i--){
                        cout<<setw(5)<<stack[i];
                    }
                    cout<<endl;

                }
                break;
            }
            case 4: {
                cout<<"Size stack is "<<top<<endl;
                break;
            }
            case 5: {
                top = 0;
                cout<<"Stack was been cleaned"<<endl;
                break;

            }
        }
        system("pause");
        system("cls");
    }

    return 0;
}
