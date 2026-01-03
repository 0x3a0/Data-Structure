#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int numsLength = nums.size();
        std::unordered_map<int, int> hash;

        for(int i = 0; i < numsLength; i++) {
            int difference = target - nums[i];
            if(hash.find(difference) != hash.end()) {
                return {hash[difference], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    std::vector<int> result = sol.twoSum(nums, target);
    std::cout << result[0] << ", " << result[1] << std::endl;
    return 0;
}