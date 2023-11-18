#include <iostream>
#include <vector>

int upperBound(std::vector<int> &arr, int x, int n) {
    int start = 0, end = n, mid = (0 + n) / 2, ans = n;

    while (start < end) {
        if (arr[mid] > x && arr[mid - 1] <= x) {
            ans = mid;
            end = mid;
        } else if (arr[mid] > x) {
            end = mid;
        } else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    return ans;
}

int main() {
    // Example usage and test cases
    std::vector<int> arr = {1, 2, 2, 4, 4, 4, 5, 7, 8, 10};
    
    // Test Case 1: x = 3
    std::cout << "Test Case 1: " << upperBound(arr, 3, arr.size()) << std::endl;

    // Test Case 2: x = 6
    std::cout << "Test Case 2: " << upperBound(arr, 6, arr.size()) << std::endl;

    // Test Case 3: x = 1
    std::cout << "Test Case 3: " << upperBound(arr, 1, arr.size()) << std::endl;

    // Test Case 4: x = 10
    std::cout << "Test Case 4: " << upperBound(arr, 10, arr.size()) << std::endl;

    // Test Case 5: x = 0
    std::cout << "Test Case 5: " << upperBound(arr, 0, arr.size()) << std::endl;

    // Test Case 6: x = 11
    std::cout << "Test Case 6: " << upperBound(arr, 11, arr.size()) << std::endl;

 

    return 0;
}
