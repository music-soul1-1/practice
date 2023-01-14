#include <iostream>
#include <cmath>

double sh(double a) {
    // declaring variables
    double e = 2.71828;

    // calculating sh(a) function
    a = (pow(e, a) - pow(e, -a))/2;

    return a;
}

int main() {
    using namespace std;
    // declaring variables
    double x = 0, W;

    // getting x from user
    cout << "Enter x:\n";
    cin >> x;

    // calculating W function
    W = sh(x)*tan(x + 1) - pow(tan(2 + sh(x - 1)), 2);
    cout << W;

    return 0;
}
