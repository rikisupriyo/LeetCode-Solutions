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
    int sizeLL(ListNode* t) {
        int c=0;
        while(t) {
            c++;
            t = t->next;
        }
        return c;
    }
    int getDecimalValue(ListNode* head) {
        int n = sizeLL(head);
        int s = 0;

        while(head) {
            s += pow(2, n-1) * head->val;
            head = head->next;
            n--;
        }
        return s;
    }
};
