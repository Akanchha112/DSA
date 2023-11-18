#include <iostream>
#include <vector>

int lowerBound(std::vector<int> arr, int n, int x) {
    int start = 0, end = n, mid = (start + end) / 2;

    while (start < end) {
        if (arr[mid] >= x && mid != 0 && arr[mid - 1] < x) {
            return mid;
        } else if (mid == 0) {
            return 0;
        } else if (arr[mid] < x) {
            start = mid + 1;
        } else if (arr[mid] >= x) {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return n;
}

int main() {
    // Test Cases
    std::vector<int> arr1 = {1, 2, 2, 2, 4, 4, 5, 6};
    int n1 = arr1.size();
    int x1 = 2;
    std::cout << "Test Case 1: " << lowerBound(arr1, n1, x1) << std::endl;

    std::vector<int> arr2 = {1, 2, 2, 2, 4, 4, 5, 6};
    int n2 = arr2.size();
    int x2 = 3;
    std::cout << "Test Case 2: " << lowerBound(arr2, n2, x2) << std::endl;

    // Add more test cases...

    return 0;
}
