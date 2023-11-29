#include <iostream>
#include <vector>

// Your provided function
int bouqets(std::vector<int>& bloomDay, int m, int k, int mid) {
    int cnt = 0, count = 0;
    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= mid) {
            cnt++;
            if (cnt == k) {
                count++;
                cnt = 0;
            }
        } else {
            cnt = 0;
        }
    }
    if (count == 0) return -1;
    return count;
}

// Your provided function
int minDays(std::vector<int>& bloomDay, int m, int k) {
    int start = 0, end = 1000000000;
    int bouq = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        bouq = bouqets(bloomDay, m, k, mid);
        if (bouq >= m) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    if (start > 1000000000) {
        return -1;
    }
    return start;
}

int main() {
    // Test cases
    std::vector<int> test1 = {1, 10, 3, 10, 2};
    std::cout << "Test Case 1: minDays(test1, 3, 1) -> " << minDays(test1, 3, 1) << std::endl;  // Expected output: 3

    std::vector<int> test2 = {1, 10, 3, 10, 2};
    std::cout << "Test Case 2: minDays(test2, 3, 2) -> " << minDays(test2, 3, 2) << std::endl;  // Expected output: -1

    std::vector<int> test3 = {7, 7, 7, 7, 12, 7, 7};
    std::cout << "Test Case 3: minDays(test3, 2, 3) -> " << minDays(test3, 2, 3) << std::endl;  // Expected output: 12

    return 0;
}
