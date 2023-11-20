#include <iostream>
#include <vector>

int firstPos(std::vector<int>& arr, int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastPos(std::vector<int>& arr, int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else if (key < arr[mid]) {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int count(std::vector<int>& arr, int n, int x) {
    int ans1 = firstPos(arr, n, x);
    int ans2 = lastPos(arr, n, x);

    if (ans1 == -1 && ans2 == -1) {
        return 0;
    } else {
        return ans2 - ans1 + 1;
    }
}

int main() {
    // Example usage
    std::vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 4, 5};
    int x = 2;

    std::cout << "Count of " << x << ": " << count(arr, arr.size(), x) << std::endl;

    // Test Case 1
    // std::vector<int> arr1 = {1, 2, 3, 4, 5};
    // int x1 = 3;
    // std::cout << "Count of " << x1 << ": " << count(arr1, arr1.size(), x1) << std::endl;

    // Test Case 2
    // std::vector<int> arr2 = {1, 1, 2, 2, 2, 2, 3, 4, 5, 5};
    // int x2 = 2;
    // std::cout << "Count of " << x2 << ": " << count(arr2, arr2.size(), x2) << std::endl;

    // Test Case 3
    // std::vector<int> arr3 = {1, 1, 1, 1, 1, 1};
    // int x3 = 1;
    // std::cout << "Count of " << x3 << ": " << count(arr3, arr3.size(), x3) << std::endl;

    // Test Case 4
    // std::vector<int> arr4 = {1, 2, 3, 4, 5};
    // int x4 = 6;
    // std::cout << "Count of " << x4 << ": " << count(arr4, arr4.size(), x4) << std::endl;

    // Test Case 5
    // std::vector<int> arr5 = {};
    // int x5 = 2;
    // std::cout << "Count of " << x5 << ": " << count(arr5, arr5.size(), x5) << std::endl;

    return 0;
}
