/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

#include <string>

using namespace std;

// @lc code=start
class Solution {
   public:
    int lengthOfLastWord(string s) {
        int result = s[0] == ' ' ? 0 : 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != ' ') {
                if (s[i-1] == ' ') {
                    result = 1;
                } else {
                    result++;
                }
            }
        }
        return result;
    }
};
// @lc code=end
