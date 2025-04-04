/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode tmp;
        ListNode *traveler = &tmp;
        while (list1 && list2) {
            if (list1->val < list2->val) {
                traveler->next = list1;
                list1 = list1->next;
            } else {
                traveler->next = list2;
                list2 = list2->next;
            }
            traveler = traveler->next;
        }
        if (!list1) {
            traveler->next = list2;
        } else {
            traveler->next = list1;
        }
        return tmp.next;
    }
};
// @lc code=end

