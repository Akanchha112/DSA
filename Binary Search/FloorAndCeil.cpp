#include <iostream>
#include <vector>

using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
    int start = 0;
    int end = arr.size() - 1;
    int ceil = -1;
    int floor = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == x) {
            return {arr[mid], arr[mid]};
        }

        if (arr[mid] > x) {
            ceil = arr[mid];
            end = mid - 1;
        } else {
            floor = arr[mid];
            start = mid + 1;
        }
    }

    return {floor, ceil};
}

int main() {
    // Test cases
    // Test Case 1
    vector<int> arr1 = {1, 2, 8, 10, 10, 12, 19};
    int x1 = 5;
    pair<int, int> result1 = getFloorAndCeil(arr1, arr1.size(), x1);
    cout << "Test Case 1: Floor = " << result1.first << ", Ceil = " << result1.second << endl;

    // Test Case 2
    vector<int> arr2 = {1, 2, 8, 10, 10, 12, 19};
    int x2 = 20;
    pair<int, int> result2 = getFloorAndCeil(arr2, arr2.size(), x2);
    cout << "Test Case 2: Floor = " << result2.first << ", Ceil = " << result2.second << endl;

    

    return 0;
}
