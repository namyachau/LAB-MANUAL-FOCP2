#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // ----- Check Perfect Number -----
    int sumDivisors = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumDivisors += i;
        }
    }
    if (sumDivisors == num) {
        cout << num << " is a Perfect number." << endl;
    } else {
        cout << num << " is not a Perfect number." << endl;
    }

    // ----- Check Armstrong Number -----
    int temp = num;
    int digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    int sumArmstrong = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sumArmstrong += pow(digit, digits);
        temp /= 10;
    }

    if (sumArmstrong == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
