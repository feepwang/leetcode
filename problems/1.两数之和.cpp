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
  vector<int> twoSum(vector<int>& nums, int target) {
    auto hash = unordered_map<int, int>{};
    for (int i = 0; i < nums.size(); i++) {
      if (hash.count(target - nums[i])) {
        return {hash[target - nums[i]], i};
      }
      hash[nums[i]] = i;
    }
    return {};
  }
};
// @lc code=end
