// 给定一个数组 nums 和一个值 val，需要原地移除所有数值等于 val 的元素。
#include <vector>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        // 直接覆盖前面的元素
        int k = 0;
        
        for(int num_el : nums) {
            if(num_el != val) {
                nums[k] = num_el;
                k++;
            }
        }

        return k;
    }
};

int main() {
    Solution sol;

    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    sol.removeElement(nums, val);

    return 0;
}