#include <iostream>
#include <vector>

int findUniqueElement(const std::vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];
    
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int low = 1;
    int high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]) {
            return arr[mid];
        }

        if (((mid % 2) == 1 && arr[mid - 1] == arr[mid]) ||
            ((mid % 2) == 0 && arr[mid + 1] == arr[mid])) {
            // value is present in right half 
            // and mid is in left half
            low = mid + 1;
        } else {
            // value is present in left half 
            // and mid is in right half
            high = mid - 1;
        }
    }

    // This should not be reached in a valid input.
    return -1;
}

int main() {
    // Test cases
    std::vector<int> arr1 = {1, 1, 2, 2, 3, 3, 4}; // Unique element: 4
    std::vector<int> arr2 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7}; // Unique element: 6
    std::vector<int> arr3 = {1, 1, 2}; // Unique element: 2

    std::cout << "Unique element in arr1: " << findUniqueElement(arr1) << std::endl;
    std::cout << "Unique element in arr2: " << findUniqueElement(arr2) << std::endl;
    std::cout << "Unique element in arr3: " << findUniqueElement(arr3) << std::endl;

    return 0;
}
