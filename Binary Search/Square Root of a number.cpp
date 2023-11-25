#include <iostream>

int floorSqrt(int n) {
    // Write your code here.
    long long int start = 0, end = n;
    while (start <= end) {
        long long int mid = (start + end) / 2;
        if (mid * mid == n) {
            return mid;
        } else if (mid * mid < n && (mid + 1) * (mid + 1) > n) {
            return mid;
        } else if (mid * mid > n) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    // Test cases
    std::cout << "floorSqrt(4): " << floorSqrt(4) << std::endl;  // Expected output: 2
    std::cout << "floorSqrt(8): " << floorSqrt(8) << std::endl;  // Expected output: 2
    std::cout << "floorSqrt(16): " << floorSqrt(16) << std::endl;  // Expected output: 4
    std::cout << "floorSqrt(25): " << floorSqrt(25) << std::endl;  // Expected output: 5
    std::cout << "floorSqrt(30): " << floorSqrt(30) << std::endl;  // Expected output: 5

    return 0;
}
