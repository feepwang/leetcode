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

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode* next) : val(x), next(next) {}
// };

class Solution {
   public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* traveler = nullptr;
        int digit = 0;
        while (true) {
            if (!l1 && !l2 && !digit) {
                break;
            }
            if (l1) {
                digit += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                digit += l2->val;
                l2 = l2->next;
            }
            if (traveler) {
                traveler->next = new ListNode(digit % 10);
                traveler = traveler->next;
            } else {
                traveler = result;
                traveler->val = digit % 10;
            }
            digit = digit / 10;
        }
        return result;
    }
};
// @lc code=end
