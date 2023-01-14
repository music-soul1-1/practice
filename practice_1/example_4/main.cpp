#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    float x = 0;
    int n = 0;

    cout << "Enter x  ";
    cin >> x;

    do {
        cout << "Enter n  ";
        cin >> n;
    } while (n <= 0);
    double sum = 0;
    int i = 1;

    while (i <= n) {
        sum += pow(x, i)/i;
        i = i + 1;
    }

    cout << "Sum is " << sum;

    return 0;
}



// using for loop
//
//#include <iostream>
//#include <cmath>
//
//int main() {
//    using namespace std;
//
//    float x = 0;
//    int n = 0;
//
//    cout << "Enter x  ";
//    cin >> x;
//
//    do {
//        cout << "Enter n  ";
//        cin >> n;
//    } while (n <= 0);
//    double sum = 0;
//
//    for (int i = 1; i <= n; i++) {
//        sum += pow(x, i)/i;
//    }
//
//    cout << "Sum is " << sum;
//
//    return 0;
//}
