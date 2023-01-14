#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    // defining variables
    float a = 0, b = 0, c = 0;
    // user input
    cout << "Enter the first side of the triangle(a):\n";
    cin >> a;

    cout << "Enter the second side of the triangle(b):\n";
    cin >> b;

    cout << "Enter the third side of the triangle(c):\n";
    cin >> c;

    if (a + b > c && b + c > a && c + a > b) {
        float p = (a + b + c)/2,
        triangleArea = sqrt(p * (p - a) * (p - b) * (p - c)), squareArea;

        if (a < b && a < c) {
            squareArea = a*a;
        }
        else if (b < a && b < c) {
            squareArea = b*b;
        }
        else {
            squareArea = c*c;
        }
        // output
        if (squareArea < triangleArea) {
            cout << "Triangle area is bigger than square area";
        }
        else {
            cout << "Square area is bigger than triangle area";
        }
    }
    else {
        cout << "This triangle doesn't exist";
    }

    return 0;
}


//void isBigger(float squareArea, float triangleArea) {
//    if (squareArea < triangleArea) {
//        std::cout << "Triangle area is bigger than square area";
//    }
//    else {
//        std::cout << "Square area is bigger than triangle area";
//    }
//}
//
//
//int main() {
//    using namespace std;
//    // defining variables
//    float a = 0, b = 0, c = 0;
//    // user input
//    cout << "Enter the first side of the triangle(a):\n";
//    cin >> a;
//
//    cout << "Enter the second side of the triangle(b):\n";
//    cin >> b;
//
//    cout << "Enter the third side of the triangle(c):\n";
//    cin >> c;
//
//    if (a + b > c && b + c > a && c + a > b) {
//        float p = (a + b + c)/2;
//        float triangleArea = sqrt(p * (p - a) * (p - b) * (p - c));
//        float squareArea;
//
//        if (a < b && a < c) {
//            squareArea = a*a;
//        }
//        else if (b < a && b < c) {
//            squareArea = b*b;
//        }
//        else {
//            squareArea = c*c;
//        }
//        // output
//        isBigger(squareArea, triangleArea);
//    }
//    else {
//        cout << "This triangle doesn't exist";
//    }
//
//    return 0;
//}
