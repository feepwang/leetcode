/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    void helper(int open, int close, string current, vector<string>& result) {
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }
        if (open)
            helper(open - 1, close, current + "(", result);
        if (open < close)
            helper(open, close - 1, current + ")", result);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper(n, n, "", result);
        return result;
    }
};
// @lc code=end
