/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

#include <string>

using namespace std;

// @lc code=start
class Solution {
   public:
    int strStr(string haystack, string needle) {
        int index = 0;
        while (true) {
            while ((index + needle.length()) <= haystack.length() &&
                   haystack[index] != needle[0]) {
                index++;
            }
            if ((index + needle.length()) > haystack.length()) {
                return -1;
            }
            int i = 1;
            while (i < needle.length() && needle[i] == haystack[index + i]) {
                i++;
            }
            if (i == needle.length())
                return index;
            index++;
        }
    }
};
// @lc code=end
