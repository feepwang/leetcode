/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0;
    ListNode *result = l1;
    while (l1 || l2) {
      int sum = l1 ? l1->val : 0;
      sum += l2 ? l2->val : 0;
      sum += carry;
      carry = sum / 10;
      l1->val = sum % 10;
      if (!l1->next) {
        if (carry || (l2 && l2->next)) {
          l1->next = new ListNode();
        }
      }
      l1 = l1->next;
      l2 = l2 ? l2->next : l2;
    }
    return result;
  }
};
// @lc code=end
