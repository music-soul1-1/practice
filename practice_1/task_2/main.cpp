#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    // variables
    double a = 0.7, b = -1.25, z = 3.5, e = 2.71828,
           x = 0, y = 0;

    // user input
    cout << "Enter x \n";
    cin >> x;

    if (x < a) {
        y = 2.8 * pow(sin(a*x), 2) - b * pow(x, 3) * z;
    }
    else if (a <= x <= pow(b, 2)) {
        y = z * cos(pow(a * x + b, 2));
    }
    else {
        y = pow(e, abs(2.5 * a * x)) + z * a * b * x;
    }

    cout << "y is equal to " << y;

    return 0;
}
