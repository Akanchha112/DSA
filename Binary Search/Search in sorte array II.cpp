#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int k = 0;
    int start = 0, end = n - 1;

    // Finding the rotation index
    while (start < end) {
        if (nums[start] > nums[start + 1]) {
            k = start + 1;
            break;
        }
        start++;
    }

    start = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        int rotatedMid = (mid + k) % n;

        if (nums[rotatedMid] == target) {
            return mid;
        } else if (nums[rotatedMid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    // Test Case 1
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    cout << "Test Case 1: " << (search(nums1, target1) ? "Found" : "Not Found") << endl;

    // Test Case 2
    vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    cout << "Test Case 2: " << (search(nums2, target2) ? "Found" : "Not Found") << endl;

    // Test Case 3
    vector<int> nums3 = {1};
    int target3 = 0;
    cout << "Test Case 3: " << (search(nums3, target3) ? "Found" : "Not Found") << endl;

    // Test Case 4
    vector<int> nums4 = {1, 3};
    int target4 = 3;
    cout << "Test Case 4: " << (search(nums4, target4) ? "Found" : "Not Found") << endl;

    return 0;
}
