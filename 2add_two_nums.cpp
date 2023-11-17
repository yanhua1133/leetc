//
// Created by YanHua on 18/11/2023.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummyHead(0);
        ListNode* cur = &dummyHead;
        int carry = 0;
        while(l1 && l2) {
            int v = l1->val + l2->val + carry;
            carry = v >= 10 ? 1 : 0;
            v %= 10;
            cur->next = new ListNode(v);
            cur = cur->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1) {
            int v = l1->val + carry;
            carry = v >= 10 ? 1 : 0;
            v %= 10;
            cur->next = new ListNode(v);
            cur = cur->next;
            l1 = l1->next;
        }
        while(l2) {
            int v = l2->val + carry;
            carry = v >= 10 ? 1 : 0;
            v %= 10;
            cur->next = new ListNode(v);
            cur = cur->next;
            l2 = l2->next;
        }
        if (carry) cur->next = new ListNode(1);
        return dummyHead.next;
    }
};