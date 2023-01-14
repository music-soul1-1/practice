#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    // declaring variables
    int n;
    float sum = 0, x = 0;
    // input
    cout << "Enter x\n";
    cin >> x;
    cout << "Enter n\n";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(sin(x), i)/(3 * i - 2);
    }
    // output
    cout << "Sum is " << sum;

    return 0;
}
