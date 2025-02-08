/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

#include <unordered_map>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                return {mp[nums[i]], i};
            }
            mp[target - nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
