#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    cout << "Enter the ID: ";
    cin >> id;

    bool isPalindrome = true;
    int n = id.length();

    for (int i = 0; i < n / 2; i++) {
        if (id[i] != id[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << id << " is a Palindrome ID.";
    } else {
        cout << id << " is not a Palindrome ID.";
    }

    return 0;
}
