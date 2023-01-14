#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0, x3 = 0, y3 = 0;
    double a, b ,c;

    // getting variables
    cout << "Enter x1 and y1\n";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2\n";
    cin >> x2 >> y2;

    cout << "Enter x3 and y3\n";
    cin >> x3 >> y3;

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if (a + b > c and a+ c > b and b + c > a){
        // calculations
        float p = (a + b + c)/2;
        float sum = sqrt( p*(p -a)*(p -b)*(p - c) );

        cout << "S is " << sum;
    }
    return 0;
}
