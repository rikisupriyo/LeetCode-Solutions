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
    ListNode* middleNode(ListNode* head) {
        if (!head) return head;
        int mid = sizeofLL(head)/2;

        while(mid--) 
            head = head->next;
        return head;
    }
};
