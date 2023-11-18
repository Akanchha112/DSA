#include <iostream>
#include <vector>

std::vector<int> searchRange(std::vector<int>& nums, int target) {
    std::vector<int> ans(2, -1);
    int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] >= target) {
            ans[0] = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (start >= 0 && start < nums.size() && nums[start] != target) {
        ans[0] = -1;
    }

    start = 0;
    end = nums.size() - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] <= target) {
            ans[1] = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (end >= 0 && end < nums.size() && nums[end] != target) {
        ans[1] = -1;
    }

    return ans;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 4, 5};
    int target = 4;

    std::vector<int> result = searchRange(nums, target);

    // Print the result
    for (int value : result) {
        std::cout << value << " ";
    }

    // Test Cases
    // Test Case 1: No occurrences of target
    // std::vector<int> case1 = {1, 2, 3, 4, 5};
    // int target1 = 6;

    // Test Case 2: Single occurrence of target
    // std::vector<int> case2 = {1, 2, 3, 4, 5};
    // int target2 = 3;

    // Test Case 3: Multiple occurrences of target
    // std::vector<int> case3 = {1, 2, 2, 3, 4, 4, 4, 5};
    // int target3 = 4;

    // Test Case 4: Target is the only element
    // std::vector<int> case4 = {7};
    // int target4 = 7;

    // Test Case 5: Empty vector
    // std::vector<int> case5 = {};
    // int target5 = 10;

    return 0;
}
