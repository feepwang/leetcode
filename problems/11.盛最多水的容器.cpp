/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

#include <algorithm>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
   public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            area = max(area, (j - i) * h);
            while (height[i] <= h && i < j)
                i++;
            while (height[j] <= h && i < j)
                j--;
        }
        return area;
    }
};
// @lc code=end
