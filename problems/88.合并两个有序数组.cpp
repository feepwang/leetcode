/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums1.reserve(m + n);
        int index = m + n - 1;
        while (index >= 0) {
            if (m > 0 && n > 0) {
                if (nums1[m-1] < nums2[n-1]) {
                    nums1[index--] = nums2[--n];
                } else {
                    nums1[index--] = nums1[--m];
                }
            } else if (n > 0) {
                nums1[index--] = nums2[--n];
            } else {
                nums1[index--] = nums1[--m];
            }
        }
        return;
    }
};
// @lc code=end
