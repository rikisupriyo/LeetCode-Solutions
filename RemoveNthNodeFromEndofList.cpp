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
    int size(ListNode* x) {
        int c=0;
        while(x) {
            c++;
            x=x->next;
        }
        return c;
    } 

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        n = size(head) - n;
        if (n == 0) return head->next;

        ListNode* curr = head;
        ListNode* prev;
        while (n--) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};
