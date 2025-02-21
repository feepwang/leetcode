/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

#include <string>

using namespace std;

// @lc code=start
class Solution {
   public:
    string addBinary(string a, string b) {
        string result;
        int digit = 0, carry = 0;
        int a_index = a.size() - 1, b_index = b.size() - 1;
        while (a_index >= 0 || b_index >= 0 || carry) {
            digit = (a_index >= 0 ? a[a_index] - '0' : 0) +
                    (b_index >= 0 ? b[b_index] - '0' : 0) + carry;
            result.insert(result.cbegin(), (digit & 01) + '0');
            carry = digit >> 1;
            a_index--;
            b_index--;
        }
        return result;
    }
};
// @lc code=end
