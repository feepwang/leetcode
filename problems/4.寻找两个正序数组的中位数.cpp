/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

#include <algorithm>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> tmp;
        tmp.insert(tmp.cend(), nums1.cbegin(), nums1.cend());
        tmp.insert(tmp.cend(), nums2.cbegin(), nums2.cend());
        sort(tmp.begin(), tmp.end());
        int count = nums1.size() + nums2.size();
        if (count & 0x1) {
            return tmp[(count >> 1)];
        }
        return (double(tmp[(count >> 1)]) + double(tmp[(count >> 1) - 1])) / 2;
    }
};
// @lc code=end
