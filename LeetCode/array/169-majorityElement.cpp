// 返回数组中出现次数大于 len / 2的元素
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int nums_len = nums.size();
        std::unordered_map<int, int> hash_map;
        for (int num : nums) {
            hash_map[num]++;    // int类型的key初始化为0
        }

        for (const auto& [k, v] : hash_map) {
            if (v > nums_len / 2) {
                return k;
            }
        }
        return -1;
    }
};