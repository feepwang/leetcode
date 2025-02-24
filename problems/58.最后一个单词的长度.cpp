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
        int index = s.length() - 1;
        while (index >= 0 && s[index] == ' ') {
            index--;
        }
        if (index < 0) {
            return 0;
        }
        
        int result = 0;
        while (index >= 0 && s[index] != ' ') {
            result++;
            index--;
        }
        return result;
    }
};
// @lc code=end
