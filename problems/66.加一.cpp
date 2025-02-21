/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int index = digits.size() - 1;
        int digit;
        vector<int> result;

        while (index >= 0 || carry) {
            digit = (index >= 0 ? digits[index] : 0) + carry;
            result.insert(result.cbegin(), digit % 10);
            carry = digit / 10;
            index--;
        }
        return result;
    }
};
// @lc code=end
