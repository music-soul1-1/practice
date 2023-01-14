#include <iostream>
#include <string>

int main() {
    using namespace std;
    // variables
    string arrayOfCars[] = {"Ferrari", "McLaren", "Lamborghini", "Ford", "Aston Martin",
                            "Tesla", "Volkswagen"},
           key;
    int size = sizeof(arrayOfCars)/sizeof(string),
        stringLength = 0;
    bool isFound = false;

    // array output
    for (int i = 0; i < size; i ++) {
        cout << " | " << arrayOfCars[i];
    }
    cout << " |\n"
         << "---Search---\n";
    // input
    cout << "Enter what you want to find:\n";
    cin >> key;

    for (int i = 0; i < size; i ++) {
        if (arrayOfCars[i].find(key, 0) != string::npos ) {
            isFound = true;
            cout << "[" << i << "]" << arrayOfCars[i] << " contains '" << key << "'" <<  "\n";
        }
        stringLength += arrayOfCars[i].length();
    }
    if (!isFound) {
        cout << "There is no '" << key << "'\n";
    }
    cout << "Complexity is O(" << stringLength << ")";

    return 0;
}
