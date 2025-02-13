/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

#include <climits>
#include <string>

using namespace std;

// @lc code=start
class Solution {
   public:
    int myAtoi(string s) {
        size_t len = s.length();
        int index = 0;
        while (index < len) {
            if (s[index] != ' ') {
                break;
            }
            index++;
        }
        if (index == len) {
            return 0;
        }
        int sign = 1;
        if (s[index] == '+') {
            index++;
        } else if (s[index] == '-') {
            sign = -1;
            index++;
        }
        int res = 0;
        while (index < len) {
            char c = s[index];
            if (c < '0' || c > '9') {
                break;
            }
            if (res > INT_MAX / 10 ||
                (res == INT_MAX / 10 && (c - '0') > INT_MAX % 10)) {
                return INT_MAX;
            }
            if (res < INT_MIN / 10 ||
                (res == INT_MIN / 10 && (c - '0') > -(INT_MIN % 10))) {
                return INT_MIN;
            }
            res = res * 10 + sign * (c - '0');
            index++;
        }
        return res;
    }
};
// @lc code=end
