/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int index = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[index] == nums[i]) {
                continue;
            } else {
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};
// @lc code=end
