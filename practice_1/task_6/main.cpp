#include <iostream>

int main() {
    using namespace std;
    // variables
    int x = 0, sum = 0,
    i = 1;
    bool hasResult = false;

    cout << "Press 0 to stop\n";

    do {
        cout << "Enter x" << i << ":\n";
        cin >> x;

        if (x > 0) {
            sum += x;
            hasResult = true;
        }
        i ++;
    } while (x != 0);

    // output
    if (hasResult) {
        cout << "Doubled sum is " << sum*2;
    }
    else {
        cout << "There is no result";
    }

    return 0;
}
