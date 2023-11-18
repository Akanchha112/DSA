#include <iostream>
#include <vector>

int searchInsert(std::vector<int>& arr, int target) {
    int ans = 0, start = 0, end = arr.size();
    int mid = (0 + end) / 2;

    while (start <= end) {
        if (start == end) {
            return start;
        } else if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid;
        } else {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main() {
    // Example usage
    std::vector<int> arr = {1, 3, 5, 6};
    int target = 5;

    int result = searchInsert(arr, target);

    // Print the result
    std::cout << "Index to insert " << target << " is: " << result << std::endl;

    
    std::vector<int> arr1 = {1, 3, 5, 6};
    int target1 = 2;
    std::cout << "Index to insert " << target1 << " is: " << searchInsert(arr1, target1) << std::endl;
    // Additional Test Cases (in comment form)
    /*
    std::vector<int> arr2 = {1, 3, 5, 6};
    int target2 = 7;
    std::cout << "Index to insert " << target2 << " is: " << searchInsert(arr2, target2) << std::endl;

    std::vector<int> arr3 = {1, 3, 5, 6};
    int target3 = 0;
    std::cout << "Index to insert " << target3 << " is: " << searchInsert(arr3, target3) << std::endl;

    std::vector<int> arr4 = {1};
    int target4 = 0;
    std::cout << "Index to insert " << target4 << " is: " << searchInsert(arr4, target4) << std::endl;

    std::vector<int> arr5 = {1, 3, 5, 6};
    int target5 = 4;
    std::cout << "Index to insert " << target5 << " is: " << searchInsert(arr5, target5) << std::endl;
    */

    return 0;
}
