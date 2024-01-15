#include <iostream>

using namespace std;

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    if (n < 0) {
        x = 1 / x;
        return (x * myPow(x, -(n + 1)));
    }

    if (n % 2 == 0) {
        return myPow(x * x, n / 2);
    } else {
        return x * myPow(x * x, (n - 1) / 2);
    }
}

int main() {
    // Test Case 1: x = 2.5, n = 3
    cout << "Test Case 1: " << myPow(2.5, 3) << endl;  // Expected output: 15.625

    // Test Case 2: x = -1.5, n = 4
    cout << "Test Case 2: " << myPow(-1.5, 4) << endl;  // Expected output: 5.0625

    // Test Case 3: x = 0.9, n = -2
    cout << "Test Case 3: " << myPow(0.9, -2) << endl;  // Expected output: 1.23457

    // Test Case 4: x = -2.0, n = 6
    cout << "Test Case 4: " << myPow(-2.0, 6) << endl;  // Expected output: 64.0

    // Test Case 5: x = 1.1, n = 10
    cout << "Test Case 5: " << myPow(1.1, 10) << endl;  // Expected output: 2.59374

    // Test Case 6: x = 100.0, n = 50 (Large Value Test Case)
    cout << "Test Case 6: " << myPow(100.0, 50) << endl;

    return 0;
}
