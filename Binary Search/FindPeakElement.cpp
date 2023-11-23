#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return 0;
    if (nums[0] > nums[1]) return 0;
    if (nums[n - 1] > nums[n - 2]) return n - 1;

    int start = 1, end = n - 2;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
            return mid;
        } else if (nums[mid] > nums[mid - 1]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

// Test Cases
int main() {
    // Example Test Case 1
    vector<int> nums1 = {1, 2, 3, 1};
    cout << "Peak element index: " << findPeakElement(nums1) << endl;

    // Example Test Case 2
    vector<int> nums2 = {1, 2, 1, 3, 5, 6, 4};
    cout << "Peak element index: " << findPeakElement(nums2) << endl;

    // Additional Test Case 1
    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << "Peak element index: " << findPeakElement(nums3) << endl;

    // Additional Test Case 2
    vector<int> nums4 = {5, 4, 3, 2, 1};
    cout << "Peak element index: " << findPeakElement(nums4) << endl;

    return 0;
}
