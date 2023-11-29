#include <iostream>
#include <vector>
#include <cmath>

int totalhrs(std::vector<int>& piles, int h, int mid) {
    long long int thrs = 0;
    for (int i = 0; i < piles.size(); i++) {
        thrs += ceil(double(piles[i]) / double(mid));
    }
    return thrs;
}

int minEatingSpeed(std::vector<int>& piles, int h) {
    long long int end = 10000000000;  // or we can write a function to find the max element in the array
    long long int start = 1;
    long long int thrs = 0;
    while (start <= end) {
        long long int mid = (start + end) / 2;
        thrs = totalhrs(piles, h, mid);
        if (thrs <= h) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    // Test cases
    std::vector<int> test_case_1 = {3, 6, 7, 11};
    int hours_1 = 8;
    std::cout << "Test Case 1: " << minEatingSpeed(test_case_1, hours_1) << std::endl; // Expected output: 4

    std::vector<int> test_case_2 = {30, 11, 23, 4, 20};
    int hours_2 = 5;
    std::cout << "Test Case 2: " << minEatingSpeed(test_case_2, hours_2) << std::endl; // Expected output: 30

    std::vector<int> test_case_3 = {30, 11, 23, 4, 20};
    int hours_3 = 6;
    std::cout << "Test Case 3: " << minEatingSpeed(test_case_3, hours_3) << std::endl; // Expected output: 23

    return 0;
}
