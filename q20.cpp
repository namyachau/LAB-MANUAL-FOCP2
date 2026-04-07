#include <iostream>
using namespace std;

int main() {
    // a
    cout << "Pattern 1:\n";
    for (int i = 0; i < 3; i++) {        // 3 rows
        for (int j = 1; j <= 5; j++) {   // numbers 1 to 5
            cout << j << " ";
        }
        cout << endl;
    }

    // b
    cout << "\nPattern 2:\n";
    for (int i = 5; i >= 1; i--) {       // rows decreasing
        for (int j = 5; j >= 6 - i; j--) { // print decreasing numbers
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
