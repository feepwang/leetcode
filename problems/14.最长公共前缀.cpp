/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            int m = min(prefix.length(), strs[i].length());
            while (j < m && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }
};
// @lc code=end
