#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    // declaring variables
    int x = 0, sum = 0;
    bool hasResult = false;

    for (int i = 1; i <= 7; i ++)
    {
        cout << "Enter x" << i << "\n";
        cin >> x;

        if (x < 0) {
            sum += abs(x);
            hasResult = true;
        }
    }
    // output block
    if (hasResult) {
        cout << "Sum is " << sum;
    }
    else {
        cout << "There is no result";
    }

    return 0;
}
