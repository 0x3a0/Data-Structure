#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index = 0;
        for (int num : nums) {
            // 每个元素的重复次数不超过2，可以使用这个条件来判断是否需要插入元素
            if (index < 2 || num != nums[index - 2]) {
                nums[index++] = num;
            }
        }
        return index;
    }
};

int main() {
    Solution sol;

    std::vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};

    sol.removeDuplicates(nums);

    return 0;
}