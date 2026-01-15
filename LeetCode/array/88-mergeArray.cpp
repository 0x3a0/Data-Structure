// 合并两个非递减顺序排序的整数数组，合并后的数组按照非递减顺序排序
#include <iostream>
#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // 先合并数组再冒泡排序
        for(int i = 0, nums1_len = m; i < n; i++, nums1_len++) {
            nums1[nums1_len] = nums2[i];
        };

        for(int j = 0; j < m + n - 1; j++) {
            for(int k = m + n - 1; k > j; k--) {
                if(nums1[k - 1] > nums1[k]) {
                    int num_val = nums1[k - 1];
                    nums1[k - 1] = nums1[k];
                    nums1[k] = num_val;
                }
            }
        }

        for(int l = 0; l < nums1.size(); l++) {
            std::cout << nums1[l];
        }
    }
};

int main() {
    Solution sol;

    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;
    
    sol.merge(nums1, m, nums2, n);

    return 0;
}