#include <iostream>

int main() {
    using namespace std;

    float mult = 1, x = 0;
    bool is_result = false;

    for (int i = 0; i < 7; i++){
        cout << "Enter x" << i + 1 << "\n";
        cin >> x;

        if(x < 6){
            mult *= x;
            is_result = true;
        }

    }
    if (is_result) {
        cout << "mult is " << mult;
    }
    else {
        cout << "no result";
    }

    return 0;
}
