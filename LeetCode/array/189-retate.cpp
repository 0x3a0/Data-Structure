// 数组nums向右轮转k个位置
#include <iostream>
#include <vector>


class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        // 辅助数组
        std::vector<int> nums2;
        int nums_len = nums.size();
        k = k % nums_len;
        for (int i = nums_len - k; i < nums_len; i++) {
        nums2.push_back(nums[i]);
        }
        
        for (int i = 0; i < nums_len - k; i++) {
            nums2.push_back(nums[i]);
        }
        
        nums = nums2;
    }
};

int main() {
    Solution sol;

    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    sol.rotate(nums, 3);

    return 0;
}