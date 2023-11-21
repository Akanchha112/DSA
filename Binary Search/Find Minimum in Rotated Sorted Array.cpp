#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& nums) {
    int k = 0, n = nums.size();
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] >= nums[(mid + 1) % n]) {
            k = (mid + 1) % n;
            return nums[k];
        } else if (nums[mid] > nums[n - 1]) {
            start = mid + 1;
        } else if (nums[mid] < nums[n - 1]) {
            end = mid - 1;
        }
    }

    return nums[k];
}

int main() {
    // Test Case 1
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum element: " << findMin(nums1) << endl;

    // Test Case 2
    vector<int> nums2 = {3, 4, 5, 1, 2};
    cout << "Minimum element: " << findMin(nums2) << endl;

    // Test Case 3
    vector<int> nums3 = {11, 13, 15, 17};
    cout << "Minimum element: " << findMin(nums3) << endl;

    // Test Case 4
    vector<int> nums4 = {1, 2, 3, 4, 5};
    cout << "Minimum element: " << findMin(nums4) << endl;

    return 0;
}
