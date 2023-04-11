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

    int size(ListNode* head) {
        ListNode* temp = head;
        int c=0;
        while (temp) {
            c++;
            temp=temp->next;
        }
        return c;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k==0) return head;
        ListNode* curr = head;
        ListNode* prev;
        k = size(head) - k%size(head);
        if (k == size(head)) return head;
        while(k--) {
            prev = curr;
            curr=curr->next;
        }
        prev->next = NULL;
        prev = curr;
        while (curr->next) {
            curr=curr->next;
        }
        curr->next = head;
        return prev;
    }
};
