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
    int sizeofLL(ListNode* t) {
        int c = 0;
        while(t) {
            c++;
            t = t->next;
        }
        return c;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        int n = sizeofLL(head)/2;
        ListNode* t = head;
        while(n > 1) {
            t = t->next;
            n--;
        }
        t->next = t->next->next;
        return head;
    }
};
