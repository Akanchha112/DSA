#include <iostream>
#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int start = 0, end = nums.size(), mid = (start + end) / 2;
        while (start < end) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                end = mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            }
            mid = (start + end) / 2;
        }
        return -1;
    }
};

int main() {
    // Test Case 1
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    int target1 = 3;

    Solution solution1;
    std::cout << "Test Case 1: " << solution1.search(nums1, target1) << std::endl;

    // Test Case 2
    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    int target2 = 6;

    Solution solution2;
    std::cout << "Test Case 2: " << solution2.search(nums2, target2) << std::endl;

    // Add more test cases as needed...

    return 0;
}
