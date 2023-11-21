#include <iostream>
#include <vector>

int findKRotation(std::vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] >= arr[(mid + 1) % n]) {
            return (mid + 1) % n;
        } else if (arr[mid] > arr[n - 1]) {
            start = mid + 1;
        } else if (arr[mid] < arr[n - 1]) {
            end = mid - 1;
        }
    }
    
    // If the array is not rotated, return 0
    return 0;
}

int main() {
    // Test cases
    std::vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    std::cout << "Test Case 1: " << findKRotation(arr1) << " rotations\n";

    std::vector<int> arr2 = {7, 8, 1, 2, 3, 4, 5, 6};
    std::cout << "Test Case 2: " << findKRotation(arr2) << " rotations\n";

    std::vector<int> arr3 = {1, 2, 3, 4, 5};
    std::cout << "Test Case 3: " << findKRotation(arr3) << " rotations\n";

    std::vector<int> arr4 = {2, 1};
    std::cout << "Test Case 4: " << findKRotation(arr4) << " rotations\n";

    return 0;
}
