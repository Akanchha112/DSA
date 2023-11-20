#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int k = 0, n = nums.size();
    int start = 0, end = n - 1;

    // Find the rotation index k
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
            return rotatedMid;
        } else if (nums[rotatedMid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }

    // Additional test cases
    vector<int> nums2 = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int target2 = 99;

    int result2 = search(nums2, target2);

    if (result2 != -1) {
        cout << "Target " << target2 << " found at index " << result2 << endl;
    } else {
        cout << "Target " << target2 << " not found in the array" << endl;
    }

    return 0;
}
